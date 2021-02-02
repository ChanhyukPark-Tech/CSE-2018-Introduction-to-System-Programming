#include <stdio.h>
int sum(int,int);
int main(void){

    int a = 10 , b = 20;
    int result;
    result = sum(a,b);
    printf("result is %d\n" , result);
    return 0 ;

}

int sum(int x , int y){
    int tmp;
    tmp = x + y;
    return tmp;

}