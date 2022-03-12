#include<stdio.h>

void main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	while(marks<0 || marks>100)
	{
		printf("Wrong input");
		scanf("%d",&marks);
	}
	if(marks>49)
		{
			printf("Pass");
		}
		else
		{
			printf("fail");
		}
}