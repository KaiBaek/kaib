    #include <stdio.h>
// 정수 3개 비교한뒤 가장 큰 정수 출력.

    int main(){

            int a;
            int b;
            int c;
            int ab;
            int bb;
            int cb;
            int bigN;

             scanf("%d %d %d", &a, &b, &c);
             

             if(a > b){
                ab = a;
             } else if(a > c) {
                ab = a;
             } else if(b > a) {
                bb = b;
             } else if(b > c) {
                bb = b;
             } else if(c > a){
                cb = c;
             } else {
                cb = c;
             }

             if(ab > b){
                int bigN = ab;
             }  else if(ab > c){
                int bigN = ab;
             }  else if(bb > a){
                int bigN = bb;
             }  else if(bb > c){
                int bigN = bb;
             }  else if(cb > a){
                int bigN = cb;
             }  else    {
                int bigN = cb;
             }

             printf("%d/n", bigN);



        return 0;
    }