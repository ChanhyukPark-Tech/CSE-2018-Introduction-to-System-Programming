#include <stdio.h>
int main(){
    int a = 4, b = 3, c = 2, d = 1; 

    printf("%d\n" , (a > b ) && (c > d));       //  1
    printf("%d\n" , (a > b ) || (c > d ));      //  1
    printf("%d\n" , (a < b) && (c > d )) ;      //0
    printf("%d\n" , (a<b) || (c>d)) ;              //1 
    printf("%d\n" , (a<b || c > d) && ( a== b  && c >= d) ); // 0 
    printf("%d\n" , !d) ;           // 0 ;
    printf("%d\n" , !a) ;               // 0 ;

    return 0 ;
    


}
