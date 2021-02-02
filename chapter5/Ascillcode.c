#include <stdio.h>

int main(void){
    char ch ;
    scanf("%c" , &ch );

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        printf("It is an alphabet.");
    }else if (ch >= 48 && ch <=57){
        printf("It is a digit");
    }else{
        printf("It is neither an alphabet nor a digit");
    }


    printf("%d" , ch );


    return 0 ;

}