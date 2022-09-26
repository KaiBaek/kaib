#include <stdio.h>

int main(){

    int month;
    scanf("%d",&month);


    switch(month/3){

        case 0:
        printf("겨울입니다.");
        break;

        case 1:
        printf("봄입니다.");
        break;

        case 2:
        printf("여름입니다.");
        break;
        
        case 3:
        printf("가을입니다.");
        break;


    }

    if(month<3){

        printf("겨울입니다.");
    } else if(month<=5){

        printf("봄입니다.");
    }else if( month<=8){

        printf("여름입니다.");
    }else{
        printf("가을입니다.");
    }


    

    return 0;
}