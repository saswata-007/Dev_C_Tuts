#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter your number: ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("The value is 1\n");
			printf("Enter another number: ");
			scanf("%d",&y);
			switch(y)
			{
				case 7: 
					printf("You are the lucky winner");
				break;
			}
			break;
		case 2:
			printf("The value is 2");
			break;
		case 3:
			printf("The value is 3");
			break;
		case 4:
			printf("The value is 4");
			break;
		case 5:
			printf("The value is 5");
			break;
		default:
			printf("Wrong Choice");
	}
}