#include <stdio.h>


int sum(int num[], int arrNum[],){ // 배열의 이름 = 배열의 주소

    int result = 0;
    printf("%d",sizeof(arr)/sizeof(int));

    for(int i=0; i<=2; i++){

        result = result + num[i];
    }

    return result;
}
int main(){

    int arr[] = {2,4,10};
    int arrSize =sizeof(arr)/sizeof(int);
    printf("%d",sizeof(arr)/sizeof(int));
    printf("%d", sum(arr, arrSize));

    return 0;
}