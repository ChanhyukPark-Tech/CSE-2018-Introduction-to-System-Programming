#include <stdio.h>
void comment(char);

int main(void ){

    char grade;
    printf("Enter your grade in capitial letter . __\b\b");
    scanf("%c" , &grade);
    comment(grade);
    return 0;

}

void comment(char ch){
    if(ch == 'A'){
        printf("Excellent.\n");
    }
    else if (ch == 'B'){
        printf("Good.\n");
    }
    else if (ch =='C'){
        printf("Not bad.\n");
    }
    else if (ch =='D'){
        printf("Need effort.\n");
    }
    else if (ch == 'F'){
        printf("you can do better than this .\n");
    }
    else{
        printf("No Such Grade.\n");
    }
    return ;

}