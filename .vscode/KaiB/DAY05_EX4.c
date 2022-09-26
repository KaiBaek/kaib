#include <stdio.h>

int main(void) {

    int i = 3;

     printf("************while창\n");

     while (i < 100) { 

            printf("%d\n", i);

            i = i + 3;

    }

    printf("************ for창 \n");

     for(int i = 3;i < 100; i = i + 3){

            printf("%d\n", i);

    }


return 0;
}