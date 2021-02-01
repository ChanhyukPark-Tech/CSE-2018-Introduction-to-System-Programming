#include <stdio.h>

int main(void){
    int second , h , m , s , temp1;
    printf("초를 입력하시오:");
    scanf("%d" , &second);
    h = second / 3600;
    temp1 = second % 3600 ;
    m = temp1 / 60 ;
    s = temp1 % 60 ;
    
printf("%d시간 %d분 %d초" , h,m,s);
return 0;

}