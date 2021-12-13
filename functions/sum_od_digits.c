#include<stdio.h>
void sum_digit(int n ,int i, int r, int s);
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
 } 
void sum_digit(int n ,int i, int r, int s)
{
 	s=0;
 	i=n;
 	while(i>0)
 	{
 		r=i%10;
		s=s+r;
		i=i/10;	
	}
	printf("Sum of your digits is %d",s);
 }