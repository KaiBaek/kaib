/* 

Olympiad USA Computing Olympiad 2013-2014 Season USACO_March_2014_Contest_Bronze_3
Title : Cow Art

Description :

A little known fact about cows is the fact that they are red-green colorblind, 
meaning that red and green look identical to them.  This makes it especially 
difficult to design artwork that is appealing to cows as well as humans.

Consider a square painting that is described by an N x N grid of characters 
(1 <= N <= 100), each one either R (red), G (green), or B (blue).  
A painting is interesting if it has many colored "regions" that can be distinguished
from each-other.  Two characters belong to the same region if they are directly adjacent 
(east, west, north, or south), and if they are indistinguishable in color.  
For example, the painting

RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
has 4 regions (2 red, 1 blue, and 1 green) if viewed by a human, but only 3regions (2 red-green, 1 blue) 
if viewed by a cow.  

Given a painting as input, please help compute the number of regions in the painting when viewed by a human and by a cow.

INPUT : 

* Line 1: The integer N.

* Lines 2..1+N: Each line contains a string with N characters, describing one row of a painting.

OUTPUT : 

* Line 1: Two space-separated integers, telling the number of regions in the painting when viewed by a human and by a cow.



*/


#include <iostream>
#include <queue>
#include <string>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int> > Queue;

char board[101][101];

bool visited[101][101];

int ans1 = 0;
int ans2 = 0;


int main(void){

ios::sync_with_stdio(0);
cin.tie(0);

int N;

cin >> N;

for(int i = 0; i < N; i++)
{
    string s1;
    cin >> s1;

    for(int j = 0; j < N; j++)
    {
        board[i][j] = s1[j];
    }
}

for(int i = 0; i < N; i++)
{
    for(int j = 0; j < N; j++)
    {
        
            if(!visited[i][j])
            {
                Queue.push({i, j});
                visited[i][j] = true;
                ans1++;

                char temp = board[i][j];
                while(!Queue.empty())
                {
                    pair<int, int> Cur = Queue.front();
                    Queue.pop();

                    for(int dir = 0; dir < 4; dir++)
                    {
                        int nx = Cur.first + dx[dir];
                        int ny = Cur.second + dy[dir];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
                        if(visited[nx][ny] || board[nx][ny] != temp) continue;

                        Queue.push({nx, ny});
                        visited[nx][ny] = true;
 
                    }
                }

            }
        
    }
}

cout << ans1 << '\n';

for(int i = 0; i < N; i++)
{
    for(int j = 0; j < N; j++)
    {
        visited[i][j] = false;
        if(board[i][j] == 'G')
        {
            board[i][j] = 'R';
        }
    }
}

for(int i = 0; i < N; i++)
{
    for(int j = 0; j < N; j++)
    {
        if(!visited[i][j])
        {
            Queue.push({i, j});
            visited[i][j] = true;
            ans2++;

            while(!Queue.empty())
            {
                pair<int, int> Cur = Queue.front();
                Queue.pop();
                char temp2 = board[i][j];

                for(int dir = 0; dir < 4; dir++)
                {
                    int nx = Cur.first + dx[dir];
                    int ny = Cur.second + dy[dir];

                    if(nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
                    if(visited[nx][ny] || board[nx][ny] != temp2) continue;

                    visited[nx][ny] = true;

                    Queue.push({nx, ny});

                }
            }
        }
    }
}

cout << ans2;

}