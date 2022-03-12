#include <stdio.h>
void main()
{
	int n,count,sum;
	printf("Enter you number: ");
	scanf("%d",&n);
	sum = 0;
	count=100 ;
	while(count<=n)
	{
		sum=sum+count;
		count=+1;
	}
	printf("\nSum = %d\n",sum);
}