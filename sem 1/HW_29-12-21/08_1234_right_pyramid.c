#include<stdio.h>
int main()
{
	/*
		12345
		1234
		123			//n=5
		12
		1
	*/
	int n,i,j,x=1;
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",x);
			x++;
		}
		x=1;
		printf("\n");
	}
	return 0;
}
	