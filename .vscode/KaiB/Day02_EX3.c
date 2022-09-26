#include <stdio.h>

int main(void) {

   int a = 100;
   int b = 200;

   int temp = a; // temp = 100
    a = b; // a = 200
    b = temp; // b = 100

    
   

   printf("a is %d, b is %d.", a, b);

    return 0;
}