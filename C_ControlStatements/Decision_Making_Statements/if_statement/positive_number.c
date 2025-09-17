#include<stdio.h>
void main()
{
    int number;
    printf("Enter number to check it is positive : ");
    scanf("%d",&number);
    if(number>0){
        printf("%d is a positive number",number);
    }
    getchar();
}