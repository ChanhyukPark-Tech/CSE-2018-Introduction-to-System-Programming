#include <stdio.h>

int sum(int x){
    int result =0 ;
    for(int i=0; i<=x ; i++){
        result += i ;
    }
    return result;  
}

int main(void){
    int i , n, answer = 0;

    printf("������ �Է��Ͻÿ�.:");
    scanf("%d" , &n);

    answer = sum(n);

    printf("0���� %d������ ���� %d �Դϴ�.\n" , n,answer);
    return 0 ;
}