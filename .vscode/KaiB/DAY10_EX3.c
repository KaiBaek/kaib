    #include <stdio.h> // call by value

    void changeNum(int* n1, int* n2){
      
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;


    }
    int main(){

        int num1 = 30;
        int num2 = 50;
      
        changeNum(&num1,&num2);

        printf("num1 = %d, num2 = %d\n", num1, num2);

        

        return 0;
    }