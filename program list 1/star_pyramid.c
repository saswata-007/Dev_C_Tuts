#include<stdio.h>

int main()
{
	int rowNum,row,space,star;
	printf("Enter total row number");
	scanf("%d",&TotalRow);
	for(row = 1; row <= TotalRow;row++)
	{
		for(space = 1; space <=(TotalRow - row); space++)
		{ 
		printf(" ");
		}
		for( star = 1 ; star <= (2*row - 1); star++)
		{
		printf("*");
		}
    	printf("\n");
	}
}