#include <stdio.h>

int main(){
    int uN;
    printf("정수 1~100까지의 숫자를 하나 입력하세요");
    scanf("%d",&uN);
    int result = 0;

    for(int i = 1; i<uN+1; i++){
        if(i%2==0){
            result = result + i;
        } 
    }

    printf("%d\n", result);
    
    return 0;
}