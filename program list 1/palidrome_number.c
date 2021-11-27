#include<stdio.h>
void main()
{
	int n,x,sum=0,y;
	
	printf("Enter the numbers: ");
	scanf("%d",&n);
	
	y=n;
	
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
	else
	{
		printf("This is not a palindrome number");
	}
}