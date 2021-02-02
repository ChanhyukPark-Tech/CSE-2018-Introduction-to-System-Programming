#include <stdio.h>

int main(void){

    int unit_price , num , express , fare = 0;
    printf("단가를 입력하세요.\n");
    scanf("%d", &unit_price);

    printf("개수를 입력하세요. \n");
    scanf("%d" , &num ) ;

    printf("급행여부 (1: 급행 , 0 : 일반)\n");
    scanf("%d" , &express);

    if(unit_price * num >= 20000){
        fare += 1500;
    } else{
        fare += 2000;
    }

    if(express){
        fare = fare + 1000;
    }

    printf("운임은 %d 입니다" , fare);

    return 0;
}