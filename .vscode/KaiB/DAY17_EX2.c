#include <stdio.h>

struct Student{
    char name[30];
    int age;

};


void tester(int a1){

    if(a1 < 20){
        printf("청소년입니다.");
    } else{
        printf("성인입니다.");
    }
}


int main(){

    struct Student s1 = {"홍길동", 30};
    tester(s1.age);


    return 0;
}