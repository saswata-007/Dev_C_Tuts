#include<stdio.h>
void main()
{
	int n,x,y,z,ul,ll;
	
	printf("Enter the upper limit: ");
	scanf("%d", &ul);
	printf("Enter the lower limit: ");
	scanf("%d", &ll);
	
	printf("Palindrome numbers between %d and %d are: ",ul,ll);
	for(n>=ul; n<=ll; n++)
	{
		x=n;
		y=0;
		while(x>0)
		{
			z=x%10;
			x=x/10;
			y=y*10+z;
		}
		if(n==y)
		printf("%d\n",n);
	}
}