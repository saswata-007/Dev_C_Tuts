#include<stdio.h>
int main()
{
    /*
        1
       23
      456       // n=4
     78910    
    */
    int n,i,j,x=0;
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
            x++;
            printf("%d",x);
        }
        printf("\n");
    }
    return 0; 
}
