#include<stdio.h>
#include<stdbool.h>
void main()
{
//	Constant variable value cannot modify
	const int a=20;
	printf("Value of a : %d \n",a);
	
	
//	Literals are those which values directly given to variable;
	int age=20;  //Integer Literal
	float height=5.8; //Float Literal
	char gender ='M'; //Gender Literal
	char name[] = "Ateeb"; //String Literal
	bool isTrue = 1;//Boolean Literal
}