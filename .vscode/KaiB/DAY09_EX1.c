#include <stdio.h>
/* 
    &(앰퍼센트) - 
    *(아스타) - 
*/
int main() {
    
   int a = 50;
   //scanf("%d", &a);

   a = 90;
   printf("a == %d\n", a);
   printf("&a == %p\n", &a);

   printf("\n***********************\n");

   int b = 20; // 정수형 변수
   printf("b == %d\n", b); 
   printf("&b == %p\n", &b);

   int* bptr; // 포인터 변수 ( 아스타를 어디에 붙이던 상관 없음 )
   bptr = &b;
   printf("bptr = %p\n", bptr);

   printf("*bptr == %d\n", *bptr);


   printf("\n***********************\n");

   int d = 200;
   int* dptr = &d;
   printf("%d", d); //200
   printf("%p", dptr); //주소
   d = 500;
   printf("%d", d); // 500
   printf("%p", dptr); // 주소
   printf("%d", *dptr); // 500

   *dptr = 700;
   printf("%d", *dptr); //700
   printf("%d", d); //700
   





   printf("\n***********************\n");

    int c[] = {1, 2, 3};
    printf("%d\n", sizeof(c)/sizeof(c[0]));
    printf("%d\n", sizeof(c)/sizeof(int)); // 상자의 사이즈 측정방법


    return 0;
}