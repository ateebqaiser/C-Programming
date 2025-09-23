#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);   
    if(number>0){
        if(number%5==0){
            printf("%d is divisible by 5",number);
        }
        else{
            printf("%d is not divisible by 5",number);
        }
    }
    else{
        printf("Please enter positive number");
    }
    getch();
}