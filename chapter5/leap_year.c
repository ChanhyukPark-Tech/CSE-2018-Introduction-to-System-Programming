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
        printf("%d 년은 윤년입니다" , year);
    }else{
        printf("%d 년은 윤년이 아닙니다" , year);
    }

    return 0;
}