#include<stdio.h>
int main()
{
    /*
        A
        AB
        ABC         //n=4
        ABCD
    */
    int n,i,j;
    char ch='A';
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }

}