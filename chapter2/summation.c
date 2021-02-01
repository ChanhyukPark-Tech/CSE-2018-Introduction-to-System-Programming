#include <stdio.h>

int main(void){

    int n1,n2,n;
    double d1,d2,d;

    printf(" 공백으로 구분해서 2개의 정수를 입력하세요 : ");
    scanf("%d %d" , &n1 , &n2);
    n = n1 + n2 ;
    printf("%d + %d = %d" ,n1,n2,n);

    return 0;


}