#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if(a%11!=0)
	{
		printf("It can not be divisble by 11");
	}
	else
	{
		printf("It is divisble by 11");		
	}
}