#include <stdio.h>

void local() {
     int count = 1;
     printf("local 함수의 count는 %d\n", count++); 
     // 1로 출력하고, 2로 내장된 값이 변화
}

void staticLocal(){
    static int staticCount = 1;
    printf("staticLocal 함수의 staticCount는 %d\n", staticCount++);
} // static 변수는 메모리에서 안 사라져요. 
// 프로그램이 끝날때까지

int main() {
    staticLocal();
    staticLocal();
    local();
   

    return 0;
}