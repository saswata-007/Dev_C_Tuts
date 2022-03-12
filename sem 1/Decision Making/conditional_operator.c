#include<stdio.h>
void main()
{
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	//(age>18)?(printf("You can drive")):(printf("You can not drive"));	
	(age>18)?((age<90)?(printf("you can drive")):(printf("you can not drive"))):(((age>0 && age<18)?(printf("you can not drive")):(printf("Wrong Input"))));
}