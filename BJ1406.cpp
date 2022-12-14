/* 
Simple Editor
*/


#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string sentence;

    cin >> sentence;

    list<char> a;
    


    for(auto c : sentence) a.push_back(c);
    auto cur = a.end();
    
    int M;
    cin >> M;

    while(M--)
    {   
        char S;
        cin >> S;

         if(S == 'P')
        {
            char PV;
            cin >> PV;
            a.insert(cur, PV);
        }

        else if(S == 'L')
        {
            if(cur != a.begin())
            {
                cur--;
            }
        }else if(S == 'D')
        {
            if(cur != a.end())
            {
                cur++;
            }
        }else
        {
            if(cur != a.begin())
            {
                cur--;
                cur = a.erase(cur);
            }
        }
        

    }

    for(auto c : a){cout << c;}


}