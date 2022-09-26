    #include <stdio.h>
    #include <string.h>

    int main(){

        char* stuN[] = {"김송아", "김송송", "김아아"};
        int stuA[] = {10,20, 30};

        for(int i= 0; i<3; i++){
            printf("이름 : %s\n 나이:%d\n", stuN[i],stuA[i]);
        }

    // char stu1N[3];
    // int stu1A;
    // char stu2N[3];
    // int stu2A;
    // char stu3N[3];
    // int stu3A;

    // scanf("%c%c%c %d %c%c%c %d %c%c%c %d", &stu1N[0],&stu1N[1],&stu1N[2], &stu1A ,&stu2N[0],&stu2N[1],&stu2N[2], &stu2A, &stu3N[0],&stu3N[1],&stu3N[2], &stu3A);
    // printf("이름 : %c%c%c\n 나이 : %d\n", stu1N[0],stu1N[1],stu1N[2], stu1A);

    
    // printf("이름 : %c%c%c\n 나이 : %d\n", stu2N[0],stu2N[1],stu2N[2], stu2A);

   
    // printf("이름 : %c%c%c\n 나이 : %d\n", stu3N[0],stu3N[1],stu3N[2], stu3A);

    return 0;
}