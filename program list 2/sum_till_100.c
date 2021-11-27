#include<stdio.h>
void main()
{
	int n=0,sum=0;
	
	printf("Enter your number: ");
	scanf("%d\n", &n);
	while(sum<=100)
	{
		sum=sum+n;
		scanf("%d\n", &n);	
	}
	printf("%d",sum);
	
	
}