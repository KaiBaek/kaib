#include <stdio.h>

int main(){
    
    int h; 
    int m;

    printf("알람시간을 정해주세요.")

    scanf("%d %d", &h, &m);

    if (m<45){
        h = h-1;
        m = m + 15;
    }

    
    return 0;
}