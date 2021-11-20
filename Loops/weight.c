#include<stdio.h>
void main()
{
	int weight;
	printf("Enter your weight: ");
	scanf("%d",&weight);
	while(weight>=65)
	{
		printf("\nGo Exercise");
		printf("\nThen, come back in");
		printf("\nEnter your weight: ");
		scanf("%d",&weight);
	}
	printf("Your weight is less than 65 now");
}