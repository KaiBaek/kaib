#include <stdio.h>

int bigNum(int n1, int n2) {
    
    if (n1 > n2){
       return n1;
    } else {
        return n2;
    }

int main() {
    
    int result;
    result =  bigNum(3, 8);
    printf("%d\n", result);
   
return 0;
}