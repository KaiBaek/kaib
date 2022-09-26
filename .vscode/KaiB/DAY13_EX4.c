#include <stdio.h>
#include <string.h>

//c언어 가위바위보

// 가위 =1 바위 = 2, 보=3

int main(){

    int num;
    int com;
    int person;

    
    while(1){

        printf("가위바위보!\n");
        printf("컴퓨터 = 2\n");
        
        scanf("%d", &person);
        printf("나 : %d\n", person);


        num = com - person;

       
        if(num == -1){
            printf("이겼습니다.\n게임을 종료합니다.");
            break; // while문을 빠져나가게 해줄거다 조건이 맞다면
        }   else {
            printf("당신은 패배자입니다.\n다시 입력하세요.\n");
        }

        

        
    }
    


    return 0;
}