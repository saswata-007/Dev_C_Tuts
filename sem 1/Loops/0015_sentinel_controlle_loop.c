#include<stdio.h>
void main()
{
	int i=0,sum=0,calAvg=0;
	float avg;
	printf("Enter the numbers:\n");
	scanf("%d",&i);
	while(i>0)
	{
		sum=sum+i;
		scanf("\n%d",&i);
		calAvg+=1;
	}
	avg = sum/calAvg * 1.0;
	printf("\nSum = %d\n Average = %f",sum,avg);
}