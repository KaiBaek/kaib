#include <stdio.h>


struct Score{

   int mid;
   int fin;

};

int main(){

   struct Score s1 = {100, 0};
   int avg1 = (s1.mid+s1.fin)/2;
   printf("s1친구의 중간/기말 평균 값은 %d점입니다.", avg1);
    return 0;
}