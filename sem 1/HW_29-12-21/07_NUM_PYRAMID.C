#include<stdio.h>
int main()
{
	/*
			1
		   232
		  34543			//n=5
		 4567654
		567898765	
	*/
	int n,i,j,k,a,b;
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(b=1;b<=n-i;b++)
		{
			printf(" ");
		}
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		k=k-2;
		for(a=1;a<i;a++)
		{
			printf("%d",k--);
		}
		printf("\n");
	}
    return 0;
}
