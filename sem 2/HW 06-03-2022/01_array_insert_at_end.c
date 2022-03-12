#include<stdio.h>
int n; // Number of Elements Present in Array (Global Variable)

int main()
{
    int a[100];
    char ch = 'Y'; // To Accept Choice From User
        printf("Enter Elements in Array\n");
        while (ch == 'Y' || ch == 'y')
        {
            scanf("%d", (a + n));
            n++; // Updating Number of Elements in the Array
            printf("Want to Insert More?(Y/N)\n");
            fflush(stdin);    // Clearing the Buffer
            scanf("%c", &ch); // Accepting Choice From User to continue the function or not
        }
    return 0;
}