#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;

    int P;
    cin >> P;

    while(P--)
    {
        int M;
        cin >> M; 

        if(M == 0)
        {
            S.pop();
        }else
        {
            S.push(M);
        }
    }

    int loop = S.size();
    int ans = 0;

    while(loop--)
    {
        ans += S.top();
        S.pop();
    }

   cout << ans;
}