#include<stdio.h>
void main()
{
	int n,i=0,num,sum=0;
	
	printf("Enter a number you want to calculate fibonacci series: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		printf("\n %d",sum);
		i+=1;
	}

	
}