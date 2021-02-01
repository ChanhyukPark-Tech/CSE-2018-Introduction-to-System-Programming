#include <stdio.h>

int main(void) {
    int number;
    double height;

    printf("number : " );
    scanf("%d" , &number);

    printf("height : ");
    scanf("%lf" , &height);

    printf("\n == results are == ");
    printf("\nnubmer : %d" , number);
    printf("\nheight : %.2lf\n\n" , height);

    return 0;

}