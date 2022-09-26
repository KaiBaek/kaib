#include <stdio.h>



int main(){

   
   int arr[26];

   for(int i = 0; i<26; i++){
        arr[i] = 97 + i;
        printf("%c\n", arr[i]);

   }

    

    return 0;
}