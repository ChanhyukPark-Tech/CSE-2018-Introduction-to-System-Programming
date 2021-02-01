#include <stdio.h>

int main(void){

    double weight , height_cm ,height_m , bmi;

    printf("몸무게(kg)와 키(cm) 입력:");
    scanf("%lf %lf" , &weight, &height_cm);

    height_m = height_cm / 100;

    bmi = weight / (height_m * height_m);

    // printf("몸무게(kg) : %lf 키(m) : %lf bmi : %lf" , weight , height_m , bmi);
    (bmi >= 20 && bmi < 25.0) ? printf("표준입니다") : printf("체중 관리가 필요합니다");
    return 0 ;




}