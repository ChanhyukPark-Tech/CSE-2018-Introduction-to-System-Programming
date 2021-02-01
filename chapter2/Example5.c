#include <stdio.h>

int main(void){


    const double weight = 1.60934;
    double mile  ;

    printf("Type your mile : ");
    scanf("%lf", &mile );

    double km = mile * weight;

    printf("your mile is %lf km " , km);


    return 0;


}