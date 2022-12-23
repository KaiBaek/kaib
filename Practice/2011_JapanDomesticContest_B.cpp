/*
The Balance of the World :

The world should be finely balanced. Positive vs. negative, light vs. shadow, and left vs. 
right brackets. Your mission is to write a program that judges whether a string is balanced
with respect to brackets so that we can observe the balance of the world.

A string that will be given to the program may have two kinds of brackets, round (“( )”)
and square (“[ ]”). A string is balanced if and only if the following conditions hold.

For every left round bracket (“(”), there is a corresponding right round bracket (“)”)
in the following part of the string.
For every left square bracket (“[”), there is a corresponding right square bracket (“]”) 
in the following part of the string.
For every right bracket, there is a left bracket corresponding to it.
Correspondences of brackets have to be one to one, that is, a single bracket never corresponds 
to two or more brackets.
For every pair of corresponding left and right brackets, the substring between them is balanced.

Sampple Input :

The input consists of one or more lines, each of which being a dataset. A dataset 
is a string that consists of English alphabets, space characters, and two kinds of brackets,
round (“( )”) and square (“[ ]”), terminated by a period. You can assume that every line has
100 characters or less. The line formed by a single period indicates the end of the input,
which is not a dataset.

Sample Output :

For each dataset, output “yes” if the string is balanced, or “no” otherwise, in a line.
There may not be any extra characters in the output.
*/

#include <iostream>
#include <stack>
#include <cmath>
#include <string>

using namespace std;


int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(1)

    {
        string s;
        bool iswrong = false;
        stack<char> Stack;
        getline(cin, s);

        if(s == ".") break;
        

        for(int i = 0; i < s.length(); i++)
        {
            
            if(s[i] == '(' || s[i] == '[')
            {
                Stack.push(s[i]);
            }else if (s[i] == ']')
            {
                if(!Stack.empty() && Stack.top()== '[')
                {
                    Stack.pop();
                }else {
                    iswrong = true;
                    break;
                }
            }else if ( s[i] == ')')
            {
                if(!Stack.empty() && Stack.top() == '(')
                {
                    Stack.pop();
                }else {
                    iswrong = true;
                    break;
                }
            }
        }
        if(Stack.empty() && !iswrong) 
        {
            cout << "yes" << "\n";
        }
        else cout << "no" << "\n";
    }



}