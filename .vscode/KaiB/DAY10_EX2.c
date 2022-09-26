    #include <stdio.h>
    
    int ageCal(int age){
         
        
    return age-1;

    }
    



    int main(){
        while(1){
        int K;
        scanf("%d", &K);

        if(K==0){
            break;
        }
       int manAge =  ageCal(K);
        printf("만나이는 %d살 입니다.\n", manAge);
        
    
        }
    }