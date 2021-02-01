#include <stdio.h>
#include <math.h>


int main(void){

int x1,y1,x2,y2;
double x_value , y_value ,sum_value ,  r; 

printf("두 점을 입력하세요 x1,y2,x2,y2:");
scanf("%d %d %d %d" , &x1,&y1,&x2,&y2);

x_value = (x2-x1) * (x2-x1) ;
y_value = (y2-y1) * (y2-y1) ;
sum_value = x_value + y_value ;
r = sqrt(sum_value);
printf("두 점 사이의 거리: %lf" , r);

return 0 ;

}
