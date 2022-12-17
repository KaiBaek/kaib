/* BAPC 2010 I
Keylogger
Problem
As a malicious hacker you are trying to steal your mother’s password, and therefore you have
installed a keylogger on her PC (or Mac, so you like). You have a log from your mother typing
the password, but unfortunately the password is not directly visible because she used the left and
right arrows to change the position of the cursor, and the backspace to delete some characters.
Write a program that can decode the password from the given keylog.
Input
The first line of the input contains a single number: the number of test cases to follow. Each test
case has the following format:
• One line with a string L, satisfying 1 ≤ Length(L) ≤ 1, 000, 000, consisting of:
– ’-’ representing backspace: the character directly before the cursor position is deleted,
if there is any.
– ’<’ (and ’>’) representing the left (right) arrow: the cursor is moved 1 character to
the left (right), if possible.
– alphanumeric characters, which are part of the password, unless deleted later. We
assume ‘insert mode’: if the cursor is not at the end of the line, and you type an
alphanumeric character, then all characters after the cursor move one position to the
right.

Every decoded password will be of length > 0.

Output -

For every test case in the input, the output should contain a single string, on a single line: the
decoded password.
Example
Input
2
<<BP<A>>Cd
ThIsIsS3Cr3t

Output
BAPC
ThIsIsS3Cr3t
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T_Case;

    cin >> T_Case;

    

    while(T_Case--)
    {
        list<char> a;
        string c1;
        cin >> c1;
        
        list<char>:: iterator cur = a.begin();

        for(auto c : c1)
        {
            if(c == '-')
            {
                if(cur != a.begin())
                {
                   cur--;
                   cur = a.erase(cur);
                }
        
            }
            else if(c == '<')
            {
                if(cur != a.begin())
                {
                    cur--;
                }
            }
            else if(c == '>')
            {
                if(cur != a.end())
                {
                    cur++;
                }
            }
            else
            {
                a.insert(cur, c);
            }
        }

        for(auto c : a)
        {
            cout << c;
        }
        cout << '\n';
    }
}