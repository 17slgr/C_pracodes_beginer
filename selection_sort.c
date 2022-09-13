#include <stdio.h>
int main()
{
    int n, arr[n], j, temp1;
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

    // sorting in ascending order using selection sort
     printf("\nThe array in ascending order is: ");

     for (int i = 0; i < n - 1; i++)
     {
         for (j = i + 1; j < n; j++)
         {
             temp1 = arr[i];
             if (arr[i] <= arr[j])
             {
                 continue;
             }
             else if (arr[i] > arr[j] && arr[j] < temp1)
             {
                 temp1 = arr[j];
             }
             arr[j] = arr[i];
             arr[i] = temp1;
         }
     }
     for (int i = 0; i < n; i++)
     {
         printf(" %d ", arr[i]);
     }

    // the array in descending order via selection sort is:

 /*   printf("\nThe array in descending order is: ");

    for (int i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp1 = arr[i];
            if (arr[i] >= arr[j])
            {
                continue;
            }
            else if (arr[i] < arr[j] && arr[j] > temp1)
            {
                temp1 = arr[j];
            
           
            }
             arr[j] = arr[i];
            arr[i] = temp1;
        }
         
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
*/
    printf("\nThank!!! You!!\n");
    return 0;
}