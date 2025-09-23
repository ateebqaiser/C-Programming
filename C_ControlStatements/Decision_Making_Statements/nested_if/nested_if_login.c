#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char username[20],password[20];
    printf("Enter username : ");
    scanf("%s", &username);   // & lagana zaroori hai

    if(strcmp( username,"ateebqaiser")==0){
        printf("Enter your password : ");
        scanf("%s",&password);
        if(strcmp(password,"admin123")==0){
            printf("\t\tWELCOME ATEEB");
        }
        else{
            printf("Invalid password");
        }
    }
    else{
        printf("Invalid username");
    }
    getch();
}
