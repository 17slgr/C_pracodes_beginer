#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, T;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        int N, j, k;
        char A[j];
        scanf("%d", &j);
        for (k = 0; k < j; k++)
        {

            scanf("%s", A[k]);
        }
        for (k = 0; k < j; k++)
        {
            if (A[k] == 'L' && A[k + 1] == 'L')
            {
                printf("\nYes\n");
                break;
            }
            else if (A[k] == 'R' && A[k + 1] == 'R')
            {
                printf("\nYes\n");
                break;
            }
            else
            {
                continue;
            }
        }

        
    }

    return 0;
}