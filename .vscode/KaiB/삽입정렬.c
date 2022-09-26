#include <stdio.h>

int main(){

    int arr[5] = {8,5,6,4,2,4};

    int key;

    for(int i = 1; i<5; i++){
        key = arr[i];
        int j;
        for(  j = i - 1; j>= 0; j--){
            if(arr[j] > key){
                arr[j+1] = arr[j];
                //arr[j] = key;
            }else { 
                break;

            }
        }
    }

    arr[j+1] = key;
}