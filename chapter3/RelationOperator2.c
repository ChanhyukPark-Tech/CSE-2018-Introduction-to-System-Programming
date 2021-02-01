#include <stdio.h>

int main(void) {

    double a = 10.000000000000000000000000001;
    double b = 10;

    printf("%d\n" , 2.5*(1.0 / 3.0 ) == 5.0/6.0);
    printf("a == b: %d\n" , a==b);
    printf(" ( a - b ) > 0.0001: %d\n" , (a - b) > 0.0001);
    return 0 ;
    
}