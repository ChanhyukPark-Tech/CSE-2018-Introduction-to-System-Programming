#include <stdio.h>

int is_vowel(char c ){
    int value;
    switch(c){
    case 'i' : {
        value = 1;
        break;
    }
    case 'e' : {
        value = 1;
        break;
    }
    case 'o' : {
        value = 1;
        break;
    }
    case 'u' : {
        value = 1;
        break;
    }
    case 'a' : {
        value = 1;
        break;
    }
    default :{
        value = 0;
        break;
    }

    }
        return value;
}




int main(void){
    char command ; 
    int value;
    scanf("%c" , &command);
    value = is_vowel(command);
    if(value){
        printf("vowel");
    }else{
        printf("consonant");
    }

}