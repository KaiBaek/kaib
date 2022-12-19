/*
Bad Hair Day

Some of Farmer John's N cows (1 <= N <= 80,000) are having a bad hair day!
 Since each cow is self-conscious about her messy hairstyle,
  FJ wants to count the number of other cows that can see the top of other cows' heads.

Each cow i has a specified height h[i] (1 <= h[i] <= 1,000,000,000) 
and is standing in a line of cows all facing east (to the right in our diagrams). 
Therefore, cow i can see the tops of the heads of cows in front of her
 (namely cows i+1, i+2, and so on), for as long as these cows are strictly shorter than cow i.

Consider this example:

        =
=       =
=   -   =           Cows facing right -->
=   =   =
= - = = =
= = = = = =
1 2 3 4 5 6
Cow#1 can see the hairstyle of cows #2, 3, 4
Cow#2 can see no cow's hairstyle
Cow#3 can see the hairstyle of cow #4
Cow#4 can see no cow's hairstyle
Cow#5 can see the hairstyle of cow 6
Cow#6 can see no cows at all!
Let c[i] denote the number of cows whose hairstyle is visible from cow i;
 please compute the sum of c[1] through c[N]. For this example,
 the desired is answer 3 + 0 + 1 + 0 + 1 + 0 = 5.

 Input : Line 1: The number of cows, N.
Lines 2..N+1: Line i+1 contains a single integer that is the height of cow i.

Output : Line 1: A single integer that is the sum of c[1] through c[N].

*/

#include <iostream>
#include <stack>

using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> S;
    int N;
    long long int ans = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
       int height;
       cin >> height;

       while(S.empty() == 0 && S.top() <= height )
       {
        S.pop();
       }

       ans += S.size();
        S.push(height);
    }
   



    
    cout << ans;

    
}