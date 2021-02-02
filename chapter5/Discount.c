#include <stdio.h>




int main(void){
    int unit_price , quantity ,middle_total_price , total_price;

    scanf("%d%d" , &unit_price , &quantity);
    middle_total_price = unit_price * quantity;
    if(quantity > 10){
        total_price =  (double)middle_total_price * ( 95.0 / 100.0);
    }else{
        total_price = middle_total_price;
    }

    printf("총금액은 %d" , total_price);
    return 0 ;

}