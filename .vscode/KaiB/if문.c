#include <stdio.h>

int main(){
    int hour;
    int age;
    scanf("%d %d",&hour, &age);

    if(hour>=22&&age>=19){

        printf("출입이 가능합니다. 좋은 시간 되세요.\n");
    }else if(hour>=22&&age<=19){
        printf("출입이 불가능합니다. 집에 가서 자세요.\n");

    }else if(hour<22||age>19){

        printf("출입이 가능합니다. 좋은 시간 되세요.\n");
    }
 


    return 0;
}
