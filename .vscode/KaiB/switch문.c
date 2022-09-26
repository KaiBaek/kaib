#include <stdio.h>

int main(){

    int month;
    scanf("%d", &month);

    if(month<=1&&month <=2){

        printf("겨울입니다.");

    }else if(month<=3&&month <=5){

        printf("봄입니다.");

    }else if(month<=6&&month <=8){

        printf("여름입니다.");

    }else if(month<=9&&month <=11){

        printf("가을입니다.");

    }

    switch(month){

        case month/2 == 0|| month/2 == 1:
        printf("겨울입니다.");
        break;

        case month/3 == 1:
        printf("봄입니다.");
        break;

        case month/3 == 2:
        printf("여름입니다.");
        break;

        case month/3 == 3:
        printf("가을입니다.");
        break;
        


    }
    
    return 0;
}