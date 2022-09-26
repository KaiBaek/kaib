#include <stdio.h>



int main(){

    int num = 3;
    const int n1 = 7;
    printf("%d\n",num*n1);
    

     num = 5;
    printf("%d\n",num*n1);

     num = 10;
    printf("%d\n",num*n1);

     num = 100;
    printf("%d\n",num*n1);

     num = 4;
    printf("%d\n",num*n1);

    return 0;
}