#include<stdio.h>

int check(int n); //user-defined function declaration

int main()	//usual everyday use pre-defined main function
{
	int n,t;
	printf("Enter a no: ");
	scanf("%d",&n);
	t=check(n);
	if(t==1)
	{
		printf("%d is odd",n);
	}
	else
	{
		printf("%d is even",n);
	}
}

int check(int n) // initialization of user-defined function
{

	if(n%2==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}