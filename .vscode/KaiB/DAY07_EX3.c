#include <stdio.h>

void changeNum1(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("%d %d",n1, n2);
}




int main() {
    
    int a =10;
    int b = 20;

    changeNum1(a, b);

    
    
return 0;
}