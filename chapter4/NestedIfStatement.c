#include <stdio.h>

int get_min (int a , int b , int c ){
int min ;
    if (a < b){
        if ( a < c ){
            min = a;
        } else{
            min = c;
        }
    }else {
        if ( b < c ){
            min = b;
        } else {
            min = c;
        }
    } 
    return min;
}

int main(void){


    int answer , a , b , c ;
    scanf("%d %d %d",&a,&b,&c);
    answer = get_min(a,b,c);

    printf("%d is smallest" , answer);

    return 0;

}   