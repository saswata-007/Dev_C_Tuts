#include<stdio.h>
void main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Your grade is E");
	}
	else if(marks>=80 && marks<90)
	{
		printf("Your grade id A+");
	}
	else if(marks>=60 && marks<80)
	{
		printf("Your grade is B+");
	}
	else if(marks>=40 && marks<60)
	{
		printf("Your grade is B");
	}
	else if(marks>=30 && marks<40)
	{
		printf("Your grade is C");
	}
	else
	{
		printf("Your grade is F");
	}
}