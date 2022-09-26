#include <stdio.h>

// 논리 연산자 

int main() {
    
   int a = 10;
   int b = 20;

   if(a == 10 && b == 20){  // && 그리고, || 또는, != 다른, 
        printf("여기를 출력해주세요.");
   }

   int x = 5;
   int y = 4;
   int z = 2;
   //참이면 1, 거짓이면 0을 반환한다.

   printf("%d", (x>y)&&(x>z)); // 1
   printf("%d", (x>y)&&(x!=z)); // 1
   printf("%d", (x <y)||(z == 2)); // 1
   printf("%d",(x%z)!=1); // 0

   
    return 0;
}