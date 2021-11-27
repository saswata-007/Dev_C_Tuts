#include<stdio.h>

void main()
{
	int n,a,b,c;
	
	printf("Enter the number till which you want to print prime numbers: ");
	scanf("%d",n);
	
	for(a=2;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			c=0;
			if(a/n==1)
			{
				printf("%d",a);
			}
		}
	}
}