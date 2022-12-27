/*

Title : Catch that Cow

Description :

Farmer John has been informed of the location of a fugitive cow and wants to catch her immediately. 
He starts at a point N (0 <= N <= 100,000) on a number line and the cow is at a point K (0 <= K <= 100,000)
on the same number line. Farmer John has two modes of transportation: walking and teleporting.

Walking: FJ can move from any point X to the points X-1 or X+1 in a single minute
Teleporting: FJ can move from any point X to the point 2*X in a single minute.
If the cow, unaware of its pursuit, does not move at all, how long does it take for Farmer John to retrieve it?

INPUT : 

Line 1: Two space-separated integers: N and K

OUTPUT :

Line 1: The least amount of time, in minutes, it takes for Farmer John to catch the fugitive cow.

*/

#include <iostream>
#include <queue>

#define x first
#define y second

using namespace std;

int dist[100002];
int N, K;


int main(void){

queue<int> Q;

cin >> N >> K;

for(int i = 0; i < 100001; i++)
{   
    dist[i] = -1;
}

dist[N] = 0;
Q.push(N);

while(dist[K] == -1)
{
    int cur = Q.front();
    Q.pop();

    for(int nxt : {cur*2, cur-1, cur+1})
    {
        if(nxt < 0 || nxt > 100001)continue;
        if(dist[nxt] != -1) continue;

        dist[nxt] = dist[cur] + 1;
        Q.push(nxt);

    }
}
cout << dist[K];

}