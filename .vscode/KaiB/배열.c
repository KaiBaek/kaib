#include <stdio.h>

int main(){

    int arr[5];

    for(int i=0; i<5; i++){

        arr[i] = i+1;
        printf("%d\n", arr[4-i]);
    }

    // for(int i=4; i>=0; i--){

    //     printf("%d\n",arr[i]);
    // }

    

    return 0;
}