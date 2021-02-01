#include <stdio.h>

int main(void){
    int x , y ;
    x = 85;
    y = 8;
    double result;

    result = (double)x / (double)y ;

    // double result = 3.42424144;
    printf("나눗셈의 결과는 %.3lf 입니다. " ,result);
   

    return 0 ;
}