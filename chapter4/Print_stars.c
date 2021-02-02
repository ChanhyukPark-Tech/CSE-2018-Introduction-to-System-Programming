#include <stdio.h>


void print_stars(void){
    int i; 
    for(i=0; i<30; i++){
        printf("*");
    }
    printf("\n");
}
int main(void) {

    print_stars();
    printf("Hello World\n");
    print_stars();
    
    return 0;
}