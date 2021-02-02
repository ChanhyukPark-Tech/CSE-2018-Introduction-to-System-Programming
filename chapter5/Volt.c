#include <stdio.h>

int main(void){
    int weather;
    double consumption , fee  , charged_fee;
    const double duty = 13.7;

    printf("Enter monthly amount in Kwh");
    scanf("%lf" , &consumption);

    if(consumption <= 200) {
        fee = consumption *93.3 + 910;
    } else if(201 <= consumption && consumption <= 400){
        fee = consumption * 187.9 + 1600;
    } else if(401 <= consumption && consumption <= 1000){
        fee = consumption * 280.6 + 7300;
    }

    printf("Enter 1 if summer of winter, 0 if not");
    scanf("%d" , &weather);

    if(consumption > 1000 && weather == 1 ){
        fee = consumption * 709.5 + 7300;
    } else if (consumption > 1000 && weather == 0){
        fee = consumption * 280.6 + 7300;
    } 


    charged_fee = fee * ((100.0 + duty ) / 100 );
    printf("Including tax , you pay %.0lf" , charged_fee);
    
    return 0;
    



}