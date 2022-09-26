#include <stdio.h> // 표준 입출력
#include <string.h>
#include <stdlib.h> // 표준 라이브러리


int main(){

printf("둘둘 은행에 오신걸 환영합니다.\n어떤 임무를 원하시나요?\n\n1.잔액조회\n2.출금\n3.입금\n4.종료\n");

int totalM = 5000;

int user;

int exp;

int imp;





while(1){ 

    scanf("%d", &user);

    if(user == 4){
        break;
    } while(1){ 
        
        if(user == 1){
        printf("잔액은 %d원 입니다.", totalM);
        break;

    }  if(user == 2){

        printf("출금하실 금액을 입력해주세요.\n");
        scanf("%d", &exp);

        if(exp < 0){
            printf("입력하신 금액이 잘못되었습니다. 다시 입력해주십쇼."); 
            break;
            
        }
        else if( exp > 0){
            printf("%d원을 성공적으로 출금하셨습니다.",exp);
            break;
        }
        else if( exp < totalM){
            printf("잔액이 부족합니다.");
            break;
        }
        
        break;
    
        
            } 
        
         else if(user == 3){

        printf("입금하실 금액을 입력해주세요.");
        scanf("%d", &imp);

         if(imp < 0){
            printf("입력하신 금액이 잘못되었습니다."); 
        }
        if( imp > 0){
            printf("%d원을 성공적으로 입금하셨습니다.",imp);
        }
        break;
        
    } 

    }
}

     return 0;
}

    
  