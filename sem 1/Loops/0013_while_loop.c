#include<stdio.h>
void main()
{
	int a = 1, s = 0;
	while(a<=100)
	{
		s=s+a;
		a++;
	}
	printf("The value between 1 to 100 is: %d\n",s);
}