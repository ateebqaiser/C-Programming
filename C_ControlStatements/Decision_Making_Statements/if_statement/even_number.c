#include<stdio.h>
void main()
{
    int number;
    printf("Enter numbe to check it is even or not : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is even number",number);
    }
}