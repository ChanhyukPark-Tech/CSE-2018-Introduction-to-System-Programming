 #include <stdio.h>

 int get_sum() {
     int x , y, result;

     scanf("%d %d",&x , &y);
     result = x + y;
     return result;

 }

 int main(void){
     int i;
     i = get_sum();
     printf("사용자가 입력한 두수의 합은 %d 입니다" ,i );
     return 0 ;
 }