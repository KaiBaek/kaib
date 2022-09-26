    #include <stdio.h>
    #include <string.h>

    int main(){

    char carr[];
    int result = 0;
  

    scanf("%c%c%c%c%c%c", &carr[6]);

    for(int i=0;i<3; i++){
        if(carr[i] == carr[5-i]){
            result++;
        }
    }
    if(result == 3){
        printf("회문이 맞습니다.");
    }else{
        printf("회문이 아닙니다.");
    }



    // 포인터 = 변수(상자)의 주소
    
    return 0;
}