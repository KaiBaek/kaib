/*
ESEJ:

Mirko's latest homework assignment is writing an essay. However, he finds 
writing essays so boring that, after working for two hours, he realized 
that all he has written are N long words consisting entirely of letters A and B.
 Having accepted that he will never finish the essay in time, poor Mirko has 
 decided to at least have some fun with it by counting nice words. 

Mirko is connecting pairs of identical letters (A with A, B with B) 
by drawing arches above the word. A given word is nice if each letter 
can be connected to exactly one other letter in such a way that no two arches intersect.
 Help Mirko count how many words are nice. 

 INPUT :
 The first line of input contains the positive integer N (1 ≤ N ≤ 100), 
 the number of words written down by Mirko. 
Each of the following N lines contains a single word consisting of letters A and B,
 with length between 2 and 100 000, inclusive. The sum of lengths of all words doesn't exceed 1 000 000.

OUTPUT : 
The first and only line of output must contain the number of nice words. 


*/

#include <iostream>
#include <stack>
#include <cmath>
#include <string>

using namespace std;


int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    int ans = 0; 

    while(N--)
    {
        string s;
        stack<char> Stack;
        cin >> s;

        for(auto c : s)
        {
            if(!Stack.empty())
            {
                if(Stack.top() == c)
                {
                    Stack.pop();
                }
                else {Stack.push(c);}
            }else Stack.push(c);
        }

        if(Stack.empty())
        
            ans ++;
        
    }

    cout << ans << "\n";

    



}