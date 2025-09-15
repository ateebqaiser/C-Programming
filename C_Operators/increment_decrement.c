#include<stdio.h>
void main()
{
    int number1=10,number2=30;
    number1=++number2;  //Prefix Increment
    printf("Value of number 1 : %d\n",number1);
    printf("Prefix Increment : %d\n",number1);


    int number3=20,number4=40;
    number3=number4++;  //Postfix Increment
    printf("Value of number 1 : %d\n",number3);
    printf("Postfix Increment : %d\n",number3);  


    int number5=30,number6=50;
    number5=--number6;   //Prefix Increment
    printf("Value of number 1 : %d\n",number5);
    printf("Prefix Increment : %d\n",number5);

    int number7=40,number8=60;
    number7=number8--;   //Postfix Deccrement
    printf("Value of number 1 : %d\n",number7);
    printf("Postfix Increment : %d\n",number7);
}