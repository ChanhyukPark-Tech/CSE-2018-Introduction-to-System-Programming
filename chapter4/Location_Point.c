#include <stdio.h>

int where(int x , int y){
    int quadrant;
    if(x > 0 && y > 0){
        return 1;
    }

    if(x < 0 && y > 0){
        return 2;
    }

    if(x > 0 && y < 0){
        return 4;
    }

    if(x < 0 && y < 0){
        return 3;
    }
}


int main(void){
    int x , y ,result;
    scanf("%d%d" , &x , &y);
    result = where(x , y);

    printf("The answer is %d" , result);
    return 0 ;
    

}