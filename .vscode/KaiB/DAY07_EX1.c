#include <stdio.h>

double changeNum(){
    printf("함수를 시작합니다.\n");
    printf("여기는 함수입니다.\n");
    printf("함수가 끕납니다.\n");

    return 7.1;
}

int main() {


double result = changeNum();
printf("%f\n", result);
changeNum();
changeNum();
changeNum();
changeNum();

int n1 = 3;
int n2 = 4;
int temp;
int n3 = 10;
int n4 = 20;

temp = n2;
n2 = n1;
n1 = temp;

temp = n4;
n4 = n3;
n3 = temp;


return 0;
}