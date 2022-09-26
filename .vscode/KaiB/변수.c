#include <stdio.h>



int fnc(int num[]){

    int result = 0;

    for(int i= 0; i<3; i++){

        result = result + num[i];
    }
  
    return result;
}



int main(){

    int arr[] = {2,3,5};

   printf("%d\n",fnc(arr));

    return 0;
}