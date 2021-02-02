#include <stdio.h>

int sum(int x){
    int result =0 ;
    for(int i=0; i<=x ; i++){
        result += i ;
    }
    return result;  
}

int main(void){
    int i , n, answer = 0;

    printf("정수를 입력하시오.:");
    scanf("%d" , &n);

    answer = sum(n);

    printf("0부터 %d까지의 합은 %d 입니다.\n" , n,answer);
    return 0 ;
}