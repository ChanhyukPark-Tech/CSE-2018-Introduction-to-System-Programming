#include <stdio.h>

int main(void){

    int per , amount , is_express ,total , product_total , answer ;
    const int express = 1000;
    const int vip_transportion = 1500;
    const int normal_transportion = 2000;
    
    scanf("%d%d%d" , &per , &amount , &is_express );
    total = per*amount ;

    if(is_express){
        total += express;
    } 

    if(total >= 20000){
        answer = vip_transportion;
    }else{
        answer = normal_transportion;
    }

    printf("��۷�� %d �Դϴ�. " , answer);
    return 0 ;
    

}