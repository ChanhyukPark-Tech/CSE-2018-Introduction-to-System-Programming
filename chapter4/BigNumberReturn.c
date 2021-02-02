#include <stdio.h>


int bignumber(int x , int y ){
    int answer;

    answer =  ( x > y ) ? x : y ;
    
    return answer;
}

int main(void){
    int a = 17 , b = 5 , result ;
    result =  bignumber(a , b);
    printf("big number is %d" , result );
    return 0;

}