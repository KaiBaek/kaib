    #include <stdio.h> 
    

   
    int main(){
        
       char sarr[] = "apple";

       printf("%d\n", sizeof(sarr)/sizeof(char) -1);

    int result = 0;
       for(int i = 0; i <10; i++){

            if(sarr[i]== NULL) { // NULL == '\0'
                
             result = i;
             break;
               
            }

       }
            printf("문자는 %d개 입니다.", result);

       

        return 0;
    }