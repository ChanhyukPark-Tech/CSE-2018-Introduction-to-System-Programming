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
     printf("����ڰ� �Է��� �μ��� ���� %d �Դϴ�" ,i );
     return 0 ;
 }