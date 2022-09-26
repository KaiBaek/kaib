#include <stdio.h>

struct book{

    int totalPage;
    int page;

};

int main(){

    struct book littlePrince;
    struct book momo;
    scanf("%d %d",&littlePrince.totalPage, &littlePrince.page);
    scanf("%d %d",&momo.totalPage, &momo.page);
    printf("어린왕자의 총 페이지 수는 %d페이지 이고\n저는 %d페이지까지 읽었습니다.\n따라서 %d %%를 읽었네요.\n", littlePrince.totalPage, littlePrince.page, (100 * littlePrince.page)/littlePrince.totalPage );
    printf("모모의 총 페이지 수는 %d페이지 이고\n저는 %d페이지까지 읽었습니다.\n따라서 %d %%를 읽었네요.\n", momo.totalPage, momo.page, (100 * momo.page)/momo.totalPage);
    return 0;
}