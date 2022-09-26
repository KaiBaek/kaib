#include <stdio.h>

int main(void) {

    int num = 1;

    while (num < 10) { 

            printf("달립니다. %d번째\n", num);

            num = num + 1;

    }

    printf("************");


// i(index)), j, k, l, m, n, o, p, q, r, s
    for(int i = 1;i < 10; i = i * 3){

            printf("달립니다.");

    }  // (시작점, 조건문, 한바퀴가 끝나면 이렇게 해줘야지)



return 0;
}
