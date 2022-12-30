/* BAPC 2012 - F

Title : FIRE

DESCRIPTION :

You are trapped in a building consisting of open spaces and walls. Some places
are on ﬁre and you have to run for the exit. Will you make it?

At each second, the ﬁre will spread to all open spaces directly connected 
to the North, South, East or West side of it. Fortunately, walls will never catch ﬁre
and will keep the ﬁre inside the building, so as soon as you are out of the building you will be safe. 
To run to any of the four open spaces adjacent to you takes you exactly one second. 
You cannot run through a wall or into an open space that is on ﬁre or is just catching ﬁre, 
but you can run out of an open space at the same moment it catches ﬁre.

Given a map of the building, decide how fast you can exit the building.



INPUT : 

On the ﬁrst line one positive number: the number of test cases, at most 100. After that per test case:

one line with two space-separated integers w and h (1 ≤ w, h ≤ 1 000): the width and height of the map of the building, 
respectively.

h lines with w characters each: the map of the building, consisting of
‘.’: a room,
‘#’: a wall,
‘@’: your starting location,
‘*’: ﬁre.
There will be exactly one ‘@’ in the map.

OUTPUT : 

Per test case:

one line with a single integer which is the minimal number of seconds 
that you need to exit the building or the string “IMPOSSIBLE” when this is not possible.

*/


#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int> > Queue1;
queue<pair<int, int> > Queue2;


int T, W, H;

bool isout = false;


int dist1[1001][1001];
int dist2[1001][1001];
string board[1001];

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--)
    {

        isout = false;
        while(!Queue1.empty())Queue1.pop();
        while(!Queue2.empty()) Queue2.pop();

        cin >> W >> H;

        for(int i = 0; i < 1001; i++)
        {
            for(int j = 0; j < 1001; j++)
            {
                dist1[i][j] = -1;
                dist2[i][j] = -1;
            }
        }

        for(int i = 0; i < H; i++)
        {
            cin >> board[i];

            for(int j = 0; j < W; j++)
            {
                if(board[i][j] == '@')
                {
                    Queue1.push({i, j});
                    dist1[i][j] = 0;
                }
                if(board[i][j] == '*')
                {
                    Queue2.push({i, j});
                    dist2[i][j] = 0;
                }
            }
        }

        while(!Queue2.empty())
        {
            pair<int, int> Cur = Queue2.front();
            Queue2.pop();

            for(int dir = 0; dir < 4; dir++)
            {
                int nx = Cur.first + dx[dir];
                int ny = Cur.second + dy[dir];

                if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
                if(dist2[nx][ny] != -1 || board[nx][ny] == '#') continue;

                dist2[nx][ny] = dist2[Cur.first][Cur.second] + 1;
                Queue2.push({nx, ny});

            }
        }
        while(!Queue1.empty() && !isout)
        {
            pair<int, int> Cur = Queue1.front();
            Queue1.pop();

            for(int dir = 0; dir < 4; dir++)
            {
                int nx = Cur.first + dx[dir];
                int ny = Cur.second + dy[dir];

                if(nx < 0 || nx >= H || ny < 0 || ny >= W)
                {
                    cout << dist1[Cur.first][Cur.second] + 1 << "\n";
                    isout = true;
                    break;
                }
                if(board[nx][ny] == '#' || dist1[nx][ny] != -1) continue;
                if(dist2[nx][ny] <= dist1[Cur.first][Cur.second] + 1 && dist2[nx][ny] != -1 ) continue;

                dist1[nx][ny] = dist1[Cur.first][Cur.second] + 1;
                Queue1.push({nx, ny});


            }
        }
        if(!isout){
        cout << "IMPOSSIBLE" << "\n";
        }
    }


}