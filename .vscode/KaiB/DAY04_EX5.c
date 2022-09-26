#include <stdio.h>

int main(void) {

int num1;
int num2;
int maxNum;


scanf("%d %d", &num1, &num2);


if(num1>num2){

   maxNum = num1;

} else if(num2>num1){

     maxNum = num2;
}

printf("%d", maxNum); 

return 0;
}
