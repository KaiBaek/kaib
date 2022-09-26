#include <iostream>
using namespace std;

class Book {
    private:
        int totalPage;
        int readPage;
    public:
        void setTotalPage(int tp);
        int getTotalPage();

};

void Book::setTotalPage(int tp){
    totalPage = tp;

}

int Book::getTotalPage(){

    return totalPage;
}

int main(){

    Book littlePrince;

    littlePrince.setTotalPage(100);
    printf("%d",littlePrince.getTotalPage());

    return 0;
}