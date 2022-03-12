#include<stdio.h>
void main()
{
	int n,x,sum=0,y,uplimit,lowlimit;
	
	printf("\nEnter the Upper limit: ");
	scanf("%d", &uplimit);
	printf("\nEnter the Lower limit: ");
	scanf("%d", &lowlimit);
	printf("\nEnter the numbers: ");
	scanf("%d",&n);
	
	y=n;
	
	if(n>=uplimit && n<=lowlimit)
	{
	
		while(n>0)
		{
			x=n%10;
			sum=(sum*10)+x;
			n=n/10;
		}
		if(y==sum)
	{
		printf("This is a palindrome number");
	}
		else if(y!=sum)
		{
			printf("This is not a palindrome number");
		}
	}
	else
	{
		printf("PLease input the value in the range you have given");
	}
	
}