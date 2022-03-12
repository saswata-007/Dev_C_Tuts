#include <stdio.h>
int n; // Number of Elements Present in Array (Global Variable)

int main()
{ 
  	int a[100];  
    int pos; // TO Store the Position where elem will be inserted
    int elem;
    int i = 0;     // Loop
    char ch = 'Y'; // To Accept Choice From User
    while (ch == 'Y' || ch == 'y')
    {
        printf("Enter Position to Insert Element\n");
        scanf("%d", &pos);
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