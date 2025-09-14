#include<stdio.h>
#include <stdbool.h> //For bool
void main()
{
    //	Data type:
	//	Integer : int
	//	Real numbers : float
	//	Character : char
    //  String : char[]
	//	Boolean : bool   		
	
	int age = 21;
	float height = 5.8;
	char gender = 'M';
	char name [] = "Ateeb qaiser";
	bool isPass = true;
	
	printf("Name of student : %s \n",name);
    printf("Age of student : %d \n",age);
    printf("Height of student : %f \n",height);
    printf("Gender of student : %c \n",gender);
    printf("Is student pass : %d \n",isPass);
}

