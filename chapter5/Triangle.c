#include <stdio.h>

double sum(double x , double y , double z){
    double summation;
    summation = x + y + z ;
    return summation ;
}

double get_max(double x , double y , double z ){
    double max ;
    if(x > y ){
        if(x > z){
            max = x;
        } else{
            max = z;
        }
    } else {
        if(y > z){
            max = y;
        }else{
            max = z;
        }
    }
    return max;
} 



int main(void){

    double a , b , c , result;
    printf("Input three line");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b <= c || b+c <= a || a+c <= b){
        printf("No Such Triangle");
    }

    result = sum(a,b,c);
    printf("this is perimetor %lf" , result);

    return 0 ;


 
    




    

}