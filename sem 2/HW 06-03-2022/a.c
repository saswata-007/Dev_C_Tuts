#include <stdio.h>

int n; // Number of Elements Present in Array (Global Variable)
void insert_beginning(int *a);
void insert_end(int *a);
void insert_any_pos(int *a);
void display_beginning(int *a);
void display_end(int *a);
void del_from_any_pos(int *a);
void del_from_beginning(int *a);
void del_from_end(int *a);
int main(int argc, char const *argv[])
{
    int a[100]; // Array
    int ch;     // To Accept Choice From User
    while (1)
    {
        printf("Enter : \n1 For Insert At Beginning \n2 For Insert At End \n3 For Insert At Any Position \n4 For Display From Beginning \n5 For Display from End \n6 To Delete From a Perticular Position \n7 To Delete From Beginning \n8 To Delete from End \n9 For Exit \n");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            insert_beginning(a);
            break;
        case 2:
            insert_end(a);
            break;
        case 3:
            insert_any_pos(a);
            break;
        case 4:
            display_beginning(a);
            break;
        case 5:
            display_end(a);
            break;
        case 6:
            del_from_any_pos(a);
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
    return 0;
    }
    // Function To Insert Element in End of Array
    void insert_end(int *a)
    {
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
    }
    // Function To Insert Element in a Perticulat Position of Array
    void insert_any_pos(int *a)
    {
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
    }
    // Function To Insert Element in Beginning of Array
    void insert_beginning(int *a)
    {
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
    // Function To Delete Elements of Array From a perticular Position
    void del_from_any_pos(int *a)
    {
        int pos;
        char ch; // To Accept Choice From User
        int i;   // Loop
        do
        {
            printf("Enter Position to Delete\n");
            scanf("%d", &pos);
            for (i = pos; i < n; i++)
                
                {
                    *(a + i) = *(a + i + 1);
                }
            n--; // Updating Number of Elements in the Array
            printf("Want to Delete More?(Y/N)\n");
            fflush(stdin); // Clearing the Buffer
            scanf("%c", &ch);
        } while (ch == 'Y' || ch == 'y');
    }
    // Function To Delete Elements of Array from Beginning of Array
    void del_from_beginning(int *a)
    {
        int pos = 0;
        char ch; // To Accept Choice From User
        int i;   // Loop
        do
        {
            for (i = pos; i < n; i++)
            {
                *(a + i) = *(a + i + 1);
            }
            n--; // Updating Number of Elements in the Array
            printf("Want to Delete More?(Y/N)\n");
            fflush(stdin); // Clearing the Buffer
            scanf("%c", &ch);
        } while (ch == 'Y' || ch == 'y');
    }
}