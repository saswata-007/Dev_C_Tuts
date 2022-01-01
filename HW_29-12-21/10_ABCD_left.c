#include<stdio.h>
int main()
{
    /*
        A 
        B B         //n=4
        C C C
        D D D D
    */
    int n,i,j;
    char ch='A',x;
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
            x=ch+(i-1);
			printf("%c ",x);
		}
		printf("\n");
	}
    return 0;
}