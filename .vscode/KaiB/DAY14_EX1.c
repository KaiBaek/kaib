#include <stdio.h>
#include <string.h>

int  plus( ){
    static int count = 0;
    count ++;
    return count;
}


int main(){
    
  
    printf("%d\n", plus());
    printf("%d\n", plus());
    
    return 0;
}