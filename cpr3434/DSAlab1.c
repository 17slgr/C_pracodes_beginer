#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, k, size;
    int A[50];
    printf("\n-------------------------------------CREATION------------------------------------------------------\n");
    printf("\nEnter the size of the array to be created: ");
    scanf("%d", &size);
    printf("\nEnter the elements of the array");

    for (i = 0; i < size; i++)
    {

        printf("\nThe value of %d element is:", i + 1);
        scanf("%d", &A[i]);
    }

    printf("The Entered array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("\t%d\t", A[i]);
    }
    int ID;
    printf("\n select 1 for insertion.\n select 2 for deletion.\n");
    scanf("%d", &ID);

    if (ID == 1)
    {
        printf("\n-------------------------------------insertion------------------------------------------------------\n");
        int pos, num;
        printf("enter the number to be inserted:");
        scanf("%d", &num);
        printf("enter the position at which to be inserted:");
        scanf("%d", &pos);
        if (pos <= 0 || pos > size + 1)
        {
            printf("Invalid input try again\n");
        }
        else
            for (i = size - 1; i >= pos - 1; i--)
            {
                A[i + 1] = A[i];
            }
        A[pos - 1] = num;
        size++;
        printf("The array after insertion is:\n");
        for (i = 0; i < size; i++)
        {
            printf("\t%d\t", A[i]);
        }
    }
    else if (ID == 2)
    {

        printf("\n-------------------------------------Deletion------------------------------------------------------\n");
        int posi, numb;
        printf("enter the number to be deleted:");
        scanf("%d", &numb);
        printf("enter the position at which to be deleted:");
        scanf("%d", &posi);
        if (posi <= 0 || posi > size)
        {
            printf("invalid input please try again");
        }
        else
            for (i = posi - 1; i < size - 1; i++)
            {
                A[i] = A[i + 1];
            }
        size--;
        printf("The array after deletion is:\n");
        for (i = 0; i < size; i++)
        {
            printf("\t%d\t", A[i]);
        }
    }

    printf("ThankUUUUU!!!!!!");

    return 0;
}
