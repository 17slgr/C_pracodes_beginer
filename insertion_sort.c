// insertion sort
#include <stdio.h>
// entering of the array
int main()
{
    int n, arr[n], j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array entered is: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    // sorting in ascending order using insertion sort
    printf("\nThe array in ascending order is: ");

    for (int i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {

            if (arr[i] >= arr[j])
            {
                continue;
            }
            else if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n\n\n descending order:\n\n\n");
    // sorting in descending order using insertion sort
   /* printf("\nThe array in ascending order is: ");

    for (int i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {

            if (arr[i] <= arr[j])
            {
                continue;
            }
            else if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
*/
    printf("\nThank you!!\n");
    return 0;
}
