#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are elligible for voting");
    }
    else{
        printf("You are not elligible for voting");
    }
}
