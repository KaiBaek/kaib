#include <stdio.h> 
    

    int main(){
        
        int arr[3];
        scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);

        int max = arr[0];
        for(int i=0; i<3; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        printf("max = %d\n", max);
        

        return 0;
    }