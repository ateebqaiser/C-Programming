#include<stdio.h>
void main()
{
     int number1=10,number2=30;
   printf("%d & %d : %d\n",number1,number2,number1&number2);
   printf("%d | %d : %d\n",number1,number2,number1|number2);
   printf("%d ^ %d : %d\n",number1,number2,number1^number2);
   printf("~%d : %d\n",number1,~number1);
   printf("%d << 1 :%d\n",number1,number1<<1);
   printf("%d >> 1 : %d\n",number1,number1>>1);
}