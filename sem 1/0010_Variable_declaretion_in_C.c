#include<stdio.h>

// Variable declaration
extern int a,b;
extern int c;
extern float f;

int main()
{
	//Variable Definition
	int a,b;
	int c;
	float f;
	
	//Actual Initiliazition
	a = 10;	
	b = 20;
	
	c = a+b;
	printf("Value of c is %d\n",c);
	
	f = 70/3;
	printf("The value of f is %f\n",f);
	
	return 0;
}