#include <stdio.h>

int main(void) {

char input;
scanf("%c", &input);

switch(input) {
    case 'Z' :

        printf("input is Z.");
        break;
        case 'S' :
        printf("input is S.");
        break;
        default : // case에 해당 안될때 출력
            printf("만반");
            break; //이어지지 않도록 브레이크를 건다.


}

printf("switch came out!");

return 0;
}
