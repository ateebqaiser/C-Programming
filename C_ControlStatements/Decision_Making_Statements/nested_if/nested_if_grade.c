#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);   
    if(marks>=50){
        printf("You passed");
        if(marks>=80){
            printf("Grade : A");
        }
        else{
            printf("Grade : B");
        }
    }
    else{
        printf("You failed");
    }
    getch();
}