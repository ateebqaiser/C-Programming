#include<stdio.h>
void main()
{
     int number1=10,number2=30;
     int result=number1+number2*4; // * has higher precedence than +
    printf("%d\n", result);

    int result2=( number1+number2) *4; // () changes precedence
    printf(" %d\n", result2);

    int x = 5, y = 10;
    int z = x > y ? x : y; // ternary operator with precedence
    printf("%d\n", z);

}

