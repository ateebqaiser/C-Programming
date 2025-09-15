#include<stdio.h>
void main()
{
    int number1=10;
    printf("Value of number 1 : %d\n",number1);
    number1+=40;
    printf("Addition with 40 : %d\n",number1);
    number1-=40;
    printf("Subtraction with 40 : %d\n",number1);
    number1*=40;
    printf("Multiplication with 40 : %d\n",number1);
    number1/=40;
    printf("Division with 40 : %d\n",number1);
    number1%=40;
    printf("Modulus with 40 : %d\n",number1);
}