    #include <stdio.h>
    #include <string.h>

    int main(){

    //     char str[] = "appleeeeeeee";

    //     //문자열 길이를 가져다 주는 함수


    //     // 결과 : 문자 길이를 int로 가져다준다.
    //      int result = strlen(str);
         
    // //    for(int i = 0; i <10; i++){

    // //         if(str[i]== NULL) { // NULL == '\0'
                
    // //          result = i;
               
    // //         }
    // //    }
    //    printf("result = %d", result);

       char c1[] = "apple";
       char c2[] = "apple";
       int c1_size = strlen(c1);
       
       int cmpResult =  strcmp(c1, c2); // 같다 == 0, 다르면 == 1 또는 -1

       if(cmpResult == 0){
        printf("같습니다.");
       }else{
        printf("같지 않습니다.");
       }

    //    int result1 = strlen(c1);
    //    int result2 = strlen(c2);
       

    //    if(result1 == result2){
    //     printf("같습니다.");
    //    } else {
    //     printf("같지 않습니다.");
    //    }

    // int same = 0;

    

    // for(int i = 0; i < c1_size; i++){
    //         if(c1[i] != c2[i]){
    //             same = same + 1;
    //         }
    // }

    // if(same == c1_size){

    //     printf("같습니다.");
    // } else{
    //     printf("같지 않습니다.");
    // }

        return 0;
    }