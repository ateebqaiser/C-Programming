#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("Enter positive number for even checker : ");
    scanf("%d", &number);   // & lagana zaroori hai

    if(number >= 0){
        if(number % 2 == 0){
            printf("%d is even number", number);
        }
        else{
            printf("%d is not even number", number);
        }
    }
    else{
        printf("You entered a negative number, please enter positive number");
    }
    getch();
}
