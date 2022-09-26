#include <stdio.h>

int plus(int a, int b) {
    int result = a + b;
    return result;
}

int minus(int c, int d){

    int result1 = c - d;
    return result1;
}

int main() {

    int num = plus(5, 7);
    printf("%d\n", num);

    int num1 = minus(7, 5);
    printf("%d\n", num1);
    
return 0;
}