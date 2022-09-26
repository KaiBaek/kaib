    #include <stdio.h> 
    #include <ctype.h>

   
    int main(){
        
        char carr[3] = {'A','B','C'};
        //printf("%c\n", carr[1]);

        char sarr[10] = "ABC";

        int result = 0;

        for(int i = 0; i <10; i++){

            if(sarr[i]== NULL) { // NULL == '\0'
                result = i;
                break;
            }
        printf("saar[%d] = %c\n", i, sarr[i]);
        }

        printf("문자가 %d개 입니다.",result );
        return 0;
    }