#include <stdio.h>

int main(void) {

    int celsius , fahrenheit;

    printf("���� �µ��� �Է��Ͻÿ�:");
    scanf("%d" , &celsius);

    fahrenheit = (int)(((double)9 / (double)5)*celsius + 32);

    printf("���� �µ� %d���� ȭ�� �µ� %d�� �Դϴ�." ,celsius,fahrenheit);
    return 0 ;


}