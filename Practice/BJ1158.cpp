/*

이 문제는 나중에 큐를 이용해서 한번 풀어보도록 하자 ! 

*/

#include <list>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);


    int N, K;

    cin >> N;
    cin >> K;


    list<int> circle;
    list<int> ans;

    

    for(int i = 1; i < N+1; i++)
    {
        circle.push_back(i);
    }

    list<int>:: iterator cur = circle.begin(); 

    while(N--)
    {
        for(int i = 1; i < K; i++)
        {
            if(cur == circle.end())
            {
                cur = circle.begin();
            } else 
            {
                cur++;
            }

        }

        ans.push_back(*cur);

        cur = circle.erase(cur);
    }
    cout << "<";

    for(auto c : ans)
    {
        cout << c << ",";
    }

    cout << ">";
}