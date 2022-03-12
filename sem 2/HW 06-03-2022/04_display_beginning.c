#include<stdio.h>
int n;

int main()
    {
    	int a[100];
        int i = 0;
        printf("Displaying the Array From Beginning\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(a + i));
        }
    }