/*
Waterloo's local Programming Contests > 13 June, 2009 B

Title : Fire!

Description: 

Joe works in a maze. Unfortunately, portions of the maze have caught on fire, 
and the owner of the maze neglected to create a fire escape plan. Help Joe escape the maze.

Given Joe's location in the maze and which squares of the maze are on fire, you must
determine whether Joe can exit the maze before the fire reaches him, and how fast he can do it.

Joe and the fire each move one square per minute, vertically or horizontally (not diagonally).
The fire spreads all four directions from each square that is on fire. Joe may exit the maze 
from any square that borders the edge of the maze. Neither Joe nor the fire may enter
a square that is occupied by a wall.

INPUT :

The first line of input contains the two integers R and C, separated by spaces,
with 1 <= R,C <= 1000. The following R lines of input each contain one row of the maze.
Each of these lines contains exactly C characters, and each of these characters is one of:

#, a wall
., a passable square
J, Joe's initial position in the maze, which is a passable square
F, a square that is on fire
There will be exactly one J in the input.

OUTPUT : 

Output a single line containing IMPOSSIBLE if Joe cannot exit the maze before the fire reaches him,
 or an integer giving the earliest time Joe can safely exit the maze, in minutes.

*/

#include <iostream>
#include <queue>
#include <string>

using namespace std;

#define x first
#define y second

string board[1001]; 
int time1[1001][1001]; // fire
int time2[1001][1001]; // person

int R; // Row which is x
int C; // column which is y

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;

    queue<pair<int, int> > Queue1;
    queue<pair<int, int> > Queue2;

    for(int i = 0; i<R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            time1[i][j] = -1;
            time2[i][j] = -1;
        }
    }

    for(int i = 0; i < R; i++)
    {
      cin >> board[i];
      
    }
   
    for(int i = 0; i < R; i++){
    
      for(int j = 0; j < C; j++)
      {
        if(board[i][j] == 'J')
        {
            Queue2.push({i, j});
            time2[i][j] = 0;
        }
        if(board[i][j] == 'F')
        {
            Queue1.push({i ,j});
            time1[i][j] = 0;
        }
      }
    }


    while(!Queue1.empty())
    {
        pair<int, int> Cur1 = Queue1.front();
        Queue1.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = Cur1.x + dx[dir];
            int ny = Cur1.y + dy[dir];

            if(nx >= R || nx < 0|| ny >= C || ny < 0) continue;
            if(board[nx][ny] == '#' || time1[nx][ny] >= 0) continue;

            time1[nx][ny] = time1[Cur1.x][Cur1.y] + 1;
            Queue1.push({nx, ny});
        }
    }
    while(!Queue2.empty())
    {
        pair<int, int> Cur2 = Queue2.front();
        Queue2.pop();

        for(int dir = 0; dir<4; dir++)
        {
            int nx = Cur2.x + dx[dir];
            int ny = Cur2.y + dy[dir];

            if(nx >= R || nx < 0 || ny >= C || ny < 0) 
            {
                cout << time2[Cur2.x][Cur2.y] + 1;
                return 0;
            }
            if(board[nx][ny] == '#' || time2[nx][ny] >= 0) continue;
            if(time1[ny][ny] != -1 && time1[nx][ny] <= time2[Cur2.x][Cur2.y] + 1) continue;



            time2[nx][ny] = time2[Cur2.x][Cur2.y] + 1;
            Queue2.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}

