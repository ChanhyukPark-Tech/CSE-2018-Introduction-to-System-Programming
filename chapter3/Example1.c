#include <stdio.h>;


int main(void){

double time = 3.76, minute , second;
int h , m , s ;
int temp1 ;
second = 3.76 * 3600 ;
int int_second = (int)second;
h = int_second / 3600;
temp1 = int_second % 3600 ;
m = temp1 / 60 ;
s = temp1 % 60 ;

printf("%.2lf 시간은 %d시간 %d분 %d초 입니다." , time , h,m,s);
return 0;

}

