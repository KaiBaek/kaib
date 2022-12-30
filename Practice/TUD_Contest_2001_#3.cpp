/* TUD Contest 2001 #3

Title : Knight Moves
*/

#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int dist[303][303];

queue<pair<int, int> > Queue;

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int T, I, KX, KY, TKX, TKY;

int main(void)
{
   cin >> T;

   while(T--)
   {
     cin >> I;

     for(int i = 0; i < I; i++)
     {
        for(int j = 0; j < I; j++)
        {
            dist[i][j] = -1;
        }
     }

     cin >> KX >> KY;

     dist[KX][KY] = 0;
     Queue.push({KX, KY});

     cin >> TKX >> TKY;

     while(!Queue.empty())
     {
        pair<int, int> Cur = Queue.front();
        Queue.pop();

        for(int idr = 0; idr < 8; idr ++)
        {
            int nx = Cur.first + dx[idr];
            int ny = Cur.second + dy[idr];

            if(nx < 0 || nx >= I || ny < 0 || ny >= I) continue;
            if(dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[Cur.first][Cur.second] + 1;
            Queue.push({nx, ny});

        }
     }

     cout << dist[TKX][TKY] << "\n";

     for(int i = 0; i < I; i++)
     {
        for(int j = 0; j < I; j++)
        {
            dist[i][j] = -1;
        }
     }
 
   }
}