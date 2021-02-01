#include <stdio.h>


int main(void) {

    int a = 10 , b = 20;
    int res;

    res = (++a , ++b);
    printf("a : %d , b : %d res : %d  " , a , b, res);
    

    res = ++a,++b;
    printf("a : %d , b : %d res : %d  " , a , b, res);

    return 0 ;
}