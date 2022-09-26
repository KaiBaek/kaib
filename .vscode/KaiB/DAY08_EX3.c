#include <stdio.h>

int global = 10; // 전역 변수 선언

void print(){
    printf("%d", global);
    
}

int main() {
    
    global = 20;
    printf("%d", global);
    print();

    return 0;
}