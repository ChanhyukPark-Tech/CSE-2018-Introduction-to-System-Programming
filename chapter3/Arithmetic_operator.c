#include <stdio.h>

int main(){
    int a = 10, b = 3 ;
    double p = 10.0 , q = 3.0;

    printf("10 + 3 = %d\n ", a + b);
    printf("10 - 3 = %d\n ", a - b);
    printf("10 * 3 = %d\n ", a * b);
    printf("10 / 3 = %d\n ", a / b);
    printf("10 %% 3 = %d\n ", a % b);

   
    printf("10.0 + 3.0 = %.2f\n" , p + q);
    printf("10.0 - 3.0 = %.2f\n" , p - q);
    printf("10.0 * 3.0 = %.2f\n" , p * q);
    printf("10.0 / 3.0 = %.2f\n" , p / q);
    
}