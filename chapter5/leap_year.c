#include <stdio.h>

int main(void){
    int year , leap_year ;
    scanf("%d" , &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 ==0)){
        leap_year = 1;
    }else {
        leap_year = 0;
    }
    
    if(leap_year){
        printf("%d ���� �����Դϴ�" , year);
    }else{
        printf("%d ���� ������ �ƴմϴ�" , year);
    }

    return 0;
}