#include<stdio.h>
int main()
{
	/*
		* * * *
        * * *
        * *         //n=4
        *
	*/
	int n,i,j,x=1;
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
	