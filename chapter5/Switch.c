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
    switch(ch){
    
    case 'A' : {
        printf("Excellent.\n");
        break;
    }
    case 'B' : {
        printf("Good.\n");
        break;
    }
    case 'C' : {
        printf("Not bad.\n");
        break;
    }
    case 'D' : {
        printf("Need effort.\n");
        break;
    }
    case 'F' : {
        printf("you can do better than this .\n");
        break;
    }
    default : {
        printf("No Such Grade.\n");
    }
    return;

}
}