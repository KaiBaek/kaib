/* 
Simple Editor
Olympiad > Croatian Highschool Competitions in Informatics > 2004 > National Competition #1 - Juniors 

Problem #2

You are given a text that is a sequence of characters.

Cursor can be positioned inside of the text (between any two consecutive characters), at the beginning (left of the first character) or at the end (right of the last character) of the text.

You are given sequence of operations you must perform on the text. 

Possible operations are: 

L	move cursor one character to the left (if cursor is at the beginning, do nothing)
D	move cursor one character to the right (if cursor is at the end, do nothing)
B	delete character left of the cursor (if cursor is at the beginning, do nothing)
P $	add character $ right of the cursor (character $ is any lowercase letter of English alphabet)
Before execution of given operations, cursor is at the end of the text. 

Write a program that will determine what would the text look like after execution of given operations. 

Input

In the first row there is the text. It consists only of lowercase letters of English alphabet and its maximal length is 100,000 characters.

In the next row there is an integer N, 1 ≤ N ≤ 500,000, number of given operations. 

In the next N rows there are operations given in the order of execution. 

Output

In first and only row you should write text after the execution of all the operations. 
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