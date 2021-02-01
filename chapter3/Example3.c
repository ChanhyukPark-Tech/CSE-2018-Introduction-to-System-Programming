#include <stdio.h>

int main(void) {

    int celsius , fahrenheit;

    printf("섭씨 온도를 입력하시오:");
    scanf("%d" , &celsius);

    fahrenheit = (int)(((double)9 / (double)5)*celsius + 32);

    printf("섭씨 온도 %d도는 화씨 온도 %d도 입니다." ,celsius,fahrenheit);
    return 0 ;


}