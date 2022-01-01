#include<stdio.h>
int main()
{
    //ERROR
    int n,i,j,x=1,y;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {       
        for(j=(n-i);j>=0;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            
            printf("%d",x);
        }
        x=y;
        {
            y=x+1;
            printf("%d",y);
        }
        printf("\n");
    }
    return 0; 
}