#include <stdio.h>
int get_min(int a , int b, int c){
    int min;
    if(a < b){
        min = a;
    } else{
        min = b;
    }

    if(c < min) {
        min = c;
    }
    return min ;

}

int main(void){
    int a , b , c , result;
    scanf("%d %d %d" , &a , &b , &c);
    result = get_min(a,b,c);

    printf("%d is smallest " , result);
    return 0;
    
}