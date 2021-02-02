#include <stdio.h>
#include <math.h>

int power(int x , int y){
    double temp;
    temp = pow(x , y);
    return (int)temp;
}
int main(void){

    int a , b , result;
    scanf("%d %d" , &a , &b);
    result = power(a,b);

    printf("%d 의 %d 승은 %d 입니다. " , a,b,result);
    return 0 ;

    


}