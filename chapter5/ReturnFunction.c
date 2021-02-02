#include <stdio.h>

int get_integer(void){
    int i;
    scanf("%d" , &i);
    return i;

}

int main(void){
    int i = get_integer();
    printf("Hello World %d\n" ,i);
    return 0;
    

}