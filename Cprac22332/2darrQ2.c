#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int i, j, r, c, k, m,R,C;
    

    printf("Enter the number of rows for the first matrix :\n");
    scanf("%d", &r);

    printf("Enter the number of colloumns for the first matrix:\n");
    scanf("%d", &c);
    int A[r][c];
    printf("Enter the values in the First matrix:\n");
    for (k = 1, i = 0; k <= r, i < r; k++, i++)
    {
        for (m = 1, j = 0; m <= r, j < c; m++, j++)
        {
            printf("The value of A%d%d is:\n", k, m);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    
    for (m = 1, i = 0; m <= r, i < r; m++, i++)
    {

        for (j = 0; j < c; j++)
        {
            printf("\t%d\t", A[i][j]);
        }

        printf("\n");
    }
     printf("Enter the number of rows for the second matrix :\n");
    scanf("%d", &R);

    printf("Enter the number of colloumns for the second matrix:\n");
    scanf("%d", &C);
    printf("\nThe matrix is:\n");
    int B[R][C];

  
     printf("\nEnter the values in the second matrix:\n");
 for (k = 1, i = 0; k <= R, i < R; k++, i++)
    {
        for (m = 1, j = 0; m <= C, j < C; m++, j++)
        {
            printf("The value of B%d%d is:\n", k, m);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nThe matrix is:\n");

    for (m = 1, i = 0; m <= R, i < R; m++, i++)
    {

        for (j = 0; j <C; j++)
        {
            printf("\t%d\t", B[i][j]);
        }

        printf("\n");
    }
       int sum=0;,s,l;
       
  
    printf("\n\n Thank u!!!!");

    return 0;
}
