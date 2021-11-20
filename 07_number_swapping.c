#include<stdio.h>
void main()
{
	int fn,sn,tn;
	printf("Enter Your first number: ");
	scanf("%d",&fn);
	printf("\nEnter Your second number: ");
	scanf("%d",&sn);
	tn=fn;
	fn=sn;
	sn=tn;
	printf("\n After swapping numbers, first number is: %d", fn);
	printf("\n After swapping numbers, second number is: %d", sn);
}