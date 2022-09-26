#include <stdio.h>

void changeNum(int* k){

    *k = 5;  

}


int main(){

    int n = 3;
    changeNum(&n); // k = 3;
    printf("%d", n);

    

    return 0;
}