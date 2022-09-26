#include <stdio.h>
  /* 
    증감연산자!
    */

int main(void) {

    int n = 10;

    n = n + 1;
     

    printf("%d\n", n);

    ++n;

    printf("%d", n);


    int m = 7;
    m++;
    printf("%d\n", m);
    printf("%d\n", m++);
    printf("%d\n", ++m);
    printf("%d\n", m++);

    
    
    return 0;
}
