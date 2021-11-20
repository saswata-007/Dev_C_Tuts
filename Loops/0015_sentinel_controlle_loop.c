#include<stdio.h>
void main()
{
	int i=0,sum=0;
	float avg;
	printf("Enter the numbers:\n");
	scanf("\n%d",&i);
	while(i>0)
	{
		sum=sum+i;
		scanf("\n%d",&i);
		//i=i+i;
	}
	avg = sum/3.0;
	printf("\nSum = %d\n Average = %f",sum,avg);
}