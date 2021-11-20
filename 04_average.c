#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	printf("Enter the value of b\n");
	scanf("%d", &b);
	printf("Enter the value of c\n");
	scanf("%d", &c);
	printf("Enter the value of d\n");
	scanf("%d", &d);
	e=a+b+c+d;
	float avg = e/4.0;
	printf("The output is %f", avg);
}