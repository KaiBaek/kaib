#include <stdio.h>

int main(void) {

    int m;

   while(1){

    printf("정수를 입력해주세요.\n");
    scanf("%d", &m);
    if(m == -1){
        printf("끝!");
        break;
    }
    
   }

return 0;
}
