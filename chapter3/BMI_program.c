#include <stdio.h>

int main(void){

    double weight , height_cm ,height_m , bmi;

    printf("������(kg)�� Ű(cm) �Է�:");
    scanf("%lf %lf" , &weight, &height_cm);

    height_m = height_cm / 100;

    bmi = weight / (height_m * height_m);

    // printf("������(kg) : %lf Ű(m) : %lf bmi : %lf" , weight , height_m , bmi);
    (bmi >= 20 && bmi < 25.0) ? printf("ǥ���Դϴ�") : printf("ü�� ������ �ʿ��մϴ�");
    return 0 ;




}