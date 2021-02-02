#include <stdio.h>

int main(void){
    int a; 
    printf("숫자를 입력하세요 . \n");
    scanf("%d" , &a);
    if(a & 1){
        printf("홀수입니다.\n");
    } else{
        printf("짝수입니다.\n");
    }

    return 0;
    
}