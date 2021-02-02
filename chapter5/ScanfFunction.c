#include <stdio.h>

int main(void){

    char c ;
    int num ;
    double dou ;

   int scan_number = scanf("%c%d%lf" , &c , &num , &dou );
   if(scan_number == 3){
       printf("%c , %d , %lf is your value" , c , num , dou);
   } else{
       printf("Format has error");
       
   }
   return 0;

    
}
