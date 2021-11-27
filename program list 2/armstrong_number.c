#include<stdio.h>
void main()
{
	int n,a,b,sum=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		b=n%10;
		sum=sum+(b*b*b);
		n=n/10;	
	}	
	if(a==sum)
	{
		printf("\nThe number is an armstrong number");
	}
	else
	{
		printf("\nThe number is not an armstrong number");
	}
}