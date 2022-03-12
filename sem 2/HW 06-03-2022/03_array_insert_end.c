#include <stdio.h>
int n;

int main()
{
	int a[100];
    int pos = 0;
    int elem;
    int i = 0;     // Loop
    char ch = 'Y'; // To Accept Choice From User
    while (ch == 'Y' || ch == 'y')
    {
        printf("Enter Element to Insert\n");
        scanf("%d", &elem);
        for (i = n; i >= pos; i--)
        {
            *(a + i + 1) = *(a + i);
        }
        *(a + pos) = elem;
        n++; // Updating Number of Elements in the Array
        printf("Want to Insert More?(Y/N)\n");
        fflush(stdin); // Clearing the Buffer
        scanf("%c", &ch);
    }
    return 0;
}