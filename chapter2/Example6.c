#include <stdio.h>

int main(void) {

    double w,h,area,perimeter;

    printf("type your two lengths of rectengular");
    scanf("%lf %lf" , &w , &h);

    area = w * h;
    perimeter = 2 * ( w + h);

    printf("your rectengulars perimeter is %lf and area is %lf " , perimeter , area) ;

    return 0 ;



}