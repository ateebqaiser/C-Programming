#include<stdio.h>
#include<string.h>
void main()
{
    char p[50];
    printf("Enter passsword for verification : ");
    scanf("%s",p);
    if(strcmp(p, "Admin1234") == 0) {
        printf("You entered correct password");
    }
}