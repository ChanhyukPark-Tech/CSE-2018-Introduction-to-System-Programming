#include <stdio.h>

int main(void) {
    int a = 10 , b = 20 , res;

    res = (a > b) ? a : b;
    printf("a : %d , b : %d , res : %d " ,a , b ,res);
    return 0;
    
}