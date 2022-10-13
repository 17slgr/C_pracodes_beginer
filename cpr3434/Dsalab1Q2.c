#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int i, k, j, r, c, R, C;

    //int B[r][c];
    printf("Enter the values of row of array1:");
    scanf("%d", &R);
    printf("Enter the values of colloumn of array1:");
    scanf("%d", &C);
    int A[R][C];
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("------------------------the entered array is:----------------------------------\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    //--------------------------------------------------------------------------------------------------------------
    printf("Enter the values of row of array2:");
    scanf("%d", &r);
    printf("Enter the values of colloumn of array2:");
    scanf("%d", &c);
    int B[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("------------------------the entered array is:----------------------------------\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    int M[R][c];
    //---------------------------------------------------------------------------------------------------------------------------------
    printf("Press 1 for addition.\nPress 2 for subtraction.\nPress 3 for multiplication\n");
    int option;
    scanf("%d", &option);
    if (option == 1)
    {
        printf("The sum of the arrays is:\n");

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", A[i][j] + B[i][j]);
            }
            printf("\n");
        }
    }

    //-----------------------------------------------subtration------------------------------------------------------)
    else if (option == 2)
    {
        printf("The difference of the arrays(a1-a2) is:\n");

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", A[i][j] - B[i][j]);
            }
            printf("\n");
        }
    }
    //-------------------------------------------------multiplication------------------------------------------------------------------
    else if (option == 3)
    {

       
              

        for (i = 0; i < R; i++)
        {
            for (j = 0; j < c; j++)
            {
                for (k = 0; k < r; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }

                M[i][j] = sum;
                sum = 0;
            }
        }

        printf("Product of the matrices:\n");

        for (i = 0; i < R; i++)
        {
            for (j = 0; j < c; j++)
                printf("%d\t", M[i][j]);

            printf("\n");
        }
    }

return 0;
}