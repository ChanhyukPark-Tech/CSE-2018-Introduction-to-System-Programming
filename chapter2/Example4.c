#include <stdio.h>

int main(void){
    float n1 = 0 ;
    float n2 = 0 ;
    float n3 = 0 ;
    

    printf("type first : ") ;
    scanf( "%f" , &n1 );
    
    printf("type second : ") ;
    scanf( "%f" , &n2 );

    printf("type third : ") ;
    scanf( "%f" , &n3 );

    // printf( "%f %f %f" , n1,n2,n3);

    float summation = n1 + n2 + n3 ;
    float average = summation / 3 ; 

    printf("sum: %.6f, average: %.6f",summation,average);

    return 0 ;
}