#include <stdio.h>
#include <string.h>

struct Student { 

    char name[30]; 
    int age;

};

int main(){

    
    struct Student stu1;
    struct Student stu2;
    struct Student stu3;

    scanf("%s, %d", stu1.name, 30, &stu1.age);
    

    printf("이름 : %s\n나이 : %d세\n", stu1.name, stu1.age );
    // printf("이름 : %s\n나이 : %d세\n", stu2.name, stu2.age );
    // printf("이름 : %s\n나이 : %d세\n", stu3.name, stu3.age );



    return 0;
}