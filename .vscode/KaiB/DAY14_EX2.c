#include <stdio.h> // 표준 입출력
#include <string.h>
#include <stdlib.h> // 표준 라이브러리


int main(){


    int n;
    scanf("%d", &n);
   
    int* num = malloc(n * sizeof(int));

   

  for(int i = 0; i<n; i++){

    num[i] = (i+1)*100;

     printf("%d\n", num[i]);

  }

  free(num); // 메모리에서 사라질거에요.
    
    return 0;
}