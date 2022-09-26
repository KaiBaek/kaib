#include <stdio.h>

int main(void) {

    int a = 100; // 선언과 동시에 초기화
   
    int b, c; //한 줄에 여러개의 변수 선언 가능

     b = 200; 
     c = 300; // 대신 값은 따로따로 넣기!

     b = c; // 오른쪽 값을 왼쪽에 대입

     printf( "b is %d, c is %d.", b, c);

    

    return 0;
}