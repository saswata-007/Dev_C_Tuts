#include<stdio.h>
void main()
{
	int a = 100;
	while (a>=1)
	{
		if(a%2==1)
		{
			printf("%d\n",a);
		}
		a=a-1;
	}
}