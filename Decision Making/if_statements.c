#include<stdio.h>
void main()
{
	printf(" DECISION MAKING------- \n\n IF \n ELSE-IF \n ELSE \n NESTED IF \n\n\n ");
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	if(marks>=50 && marks<=100)
	{
		printf("Well done\n");
		if(marks>=90 && marks<=100)
		{
			printf("Excellent\n");
			if(marks==100)
			{
				printf("You are a Genius");
			}
		}
		else if (marks>=80 && marks<90)
		{
			printf("very good, keep it up");
		}
		else if(marks>=70 && marks<80)
		{
			printf("Good, keep it going");
		}
		else if(marks>=60 && marks<70)
		{
			printf("Nice");
		}
		else{
			printf("You can do better");
		}
	}
	else if(marks>=0 && marks<50)
	{
		printf("Need to study\n");
		if(marks>=30 && marks<50)
		{
			printf("You need to study more and more to get good marks");
		}
		else if(marks>=20 && marks<30)
		{
			printf("You are going to fail if you dont start studying now");
		}
		else{
			printf("you failed");
		}
		
	}
	else
	{
		printf("Wrong Input");
	}
}