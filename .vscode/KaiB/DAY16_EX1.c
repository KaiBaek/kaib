#include <stdio.h>

int main(){

    int num1 = 5;
    printf("int의 사이즈는 %d\n", sizeof(num1));

    double num2 = 3.0;
    printf("dobule의 사이즈는 %d\n", sizeof(num2));

    char num3 = 'a';
    printf("char의 사이즈는 %d\n", sizeof(num3));

    int iarr[3];
    printf("iarr[3]의 사이즈는 %d\n", sizeof(iarr));

    double darr[4];
    printf("darr[4]의 사이즈는 %d\n", sizeof(darr));

    int* iptr = &num1;
    printf("iptr의 사이즈는 %d\n", sizeof(iptr));

    double* dptr = &num2;
    printf("dptr 사이즈는 %d\n", sizeof(dptr));


    return 0;
}