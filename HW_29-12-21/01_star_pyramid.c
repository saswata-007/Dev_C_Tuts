#include<stdio.h>
int main()
{
    /*
        *
       * *            // n=3
      * * * 
    */
    int n,i,j;
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}