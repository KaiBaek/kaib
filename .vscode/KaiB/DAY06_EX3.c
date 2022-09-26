#include <stdio.h>

int main(void) {

int num1 = 10;
int num2 = 20;
int num3 = 40;
int num4 = 111;
int num5 = 500;

int arr[] = {10, 20, 40, 111, 500};

for(int i = 0; i<5; i++ ){
    printf("%d\n",arr[i]);
}

printf("%d\n", arr[0]);
printf("%d\n", arr[1]);
printf("%d\n", arr[2]);
printf("%d\n", arr[3]);
printf("%d\n", arr[4]);


return 0;
}
