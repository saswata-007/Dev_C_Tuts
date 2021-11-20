#include<stdio.h>
void main()
{
	int a = 100, i=1;
	while(i<=100)
	{
		if(a%2==1)
		{
			printf("%d\n",a);
		}
		i = i+1;
		a=a-1;
	}
}