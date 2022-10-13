#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int i, j, r, c, k, m;
    int total = 0, average = 0;

    printf("Enter the number of rows:\n");
    scanf("%d", &r);

    printf("Enter the number of colloumns:\n");
    scanf("%d", &c);
    int A[r][c];
    printf("Enter the values in the matrix:\n");
    for (k = 1, i = 0; k <= r, i < r; k++, i++)
    {
        for (m = 1, j = 0; m <= r, j < c; m++, j++)
        {
            printf("The value of marks of subject%d for student%d is:\n", m, k);
            scanf("%d", &A[i][j]);
        }
    } 
    printf("The given matrix is:\n");

    for (k = 1; k <= c; k++)
    {
        printf("\t\tsubject%d", k);
    }
    printf("  \tTotal  \t  Average ");

    for (m = 1, i = 0; m <= r, i < r; m++, i++)
    {

        printf("\nstudent%d:", m);
        for (j = 0; j < c; j++)
        {
            printf("   \t  %d\t\t", A[i][j]);
        }
        for (total = 0, j = 0; j < c; j++)
        {
            total = total + A[i][j];
        }
        printf("  %d\t   ", total);
        printf(" %f ", (float)(total) / c);
    }
    printf("\n\n Thank u!!!!");

    return 0;
}
