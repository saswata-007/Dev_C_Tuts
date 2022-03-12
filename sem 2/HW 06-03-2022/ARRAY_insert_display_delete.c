#include <stdio.h>
int n; // number of elements
void insert_beginning(int *a);
void insert_end(int *a);
void insert_any_position(int *a);
void display_beginning(int *a);
void display_end(int *a);
void del_from_any_position(int *a);
void del_from_beginning(int *a);
void del_from_end(int *a);
int main()
{
    int a[100];
    int ch;    // choice
    while (1)
    {
        printf("Enter : \n1 For Insert At Beginning\n2 For Insert At End\n3 For Insert At Any position\n4 For Display From Beginning\n5 For Display from End\n6 To Delete From a Perticular position\n7 To Delete From Beginning\n8 To Delete from End\n9 For Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beginning(a);
            break;
        case 2:
            insert_end(a);
            break;
        case 3:
            insert_any_position(a);
            break;
        case 4:
            display_beginning(a);
            break;
        case 5:
            display_end(a);
            break;
        case 6:
            del_from_any_position(a);
            break;
        case 7:
            del_from_beginning(a);
            break;
        case 8:
            n--;
            break;
        case 9:
            break;
        }
        if (ch == 9)
        {
            break;
        }
    }
    return 0;
}

// Insert At end

void insert_end(int *a)
{
    char ch = 'Y'; 
    printf("Enter elements in Array\n");
    while (ch == 'Y' || ch == 'y')
    {
        scanf("%d", (a + n));
        n++; // incrementing the number of elements
        printf("Want to Insert More?(Y/N)\n");
        fflush(stdin);    // flushing the buffer
        scanf("%c", &ch); // Accepting choice from user to continueor not
    }
}

// Insert At any position

void insert_any_position(int *a)
{
    int position;       // position
    int elements;      // to store the elementsent
    int i = 0;     // for loop counter
    char ch = 'Y'; // To Accept Choice From User
    while (ch == 'Y' || ch == 'y')
    {
        printf("Enter position to Insert elementsent\n");
        scanf("%d", &position);
        printf("Enter elementsent to Insert\n");
        scanf("%d", &elements);
        for (i = n; i >= position; i--)
        {
            *(a + i + 1) = *(a + i);
        }
        *(a + position) = elements;
        n++;    // incrementing the number of elements
        printf("Want to Insert More?(Y/N)\n");
        fflush(stdin);    // flushing the buffer
        scanf("%c", &ch); // Accepting Choice From User to continue or not
    }
}

//insert at beginning

void insert_beginning(int *a)
{
    int position = 0;
    int elements;
    int i = 0;     
    char ch = 'Y'; 
    while (ch == 'Y' || ch == 'y')
    {
        printf("Enter elements to Insert\n");
        scanf("%d", &elements);
        for (i = n; i >= position; i--)
        {
            *(a + i + 1) = *(a + i);
        }
        *(a + position) = elements;
        n++; // Updating Number of elements in the Array
        printf("Want to Insert More?(Y/N)\n");
        fflush(stdin);    // Clearing the Buffer
        scanf("%c", &ch); // Accepting Choice From User to continue the function or not
    }
}

// Function To Display the Array From Beginning

void display_beginning(int *a)
{
    int i = 0;
    printf("Displaying the Array From Beginning\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(a + i));
    }
}

// Function To Display the Array From End

void display_end(int *a)
{
    int i;
    printf("Displaying the Array From End\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", *(a + i));
    }
}

// Function To Delete elements of Array From a perticular position

void del_from_any_position(int *a)
{
    int position;
    char ch; // To Accept Choice From User
    int i;   // Loop
    do
    {
        printf("Enter position to Delete\n");
        scanf("%d", &position);
        for (i = position; i < n; i++)
        {
            *(a + i) = *(a + i + 1);
        }
        n--; // Updating Number of elements in the Array
        printf("Want to Delete More?(Y/N)\n");
        fflush(stdin);    // Clearing the Buffer
        scanf("%c", &ch); // Accepting Choice From User to continue the function or not

    } while (ch == 'Y' || ch == 'y');
}

// Function To Delete elements of Array from Beginning of Array

void del_from_beginning(int *a)
{
    int position = 0;
    char ch; // To Accept Choice From User
    int i;   // Loop
    do
    {
        for (i = position; i < n; i++)
        {
            *(a + i) = *(a + i + 1);
        }
        n--; // Updating Number of elements in the Array
        printf("Want to Delete More?(Y/N)\n");
        fflush(stdin);    // Clearing the Buffer
        scanf("%c", &ch); // Accepting Choice From User to continue the function or not

    } while (ch == 'Y' || ch == 'y');
}