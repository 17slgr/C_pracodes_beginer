#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A, B, C, D;
    int i, T;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {

        scanf("%d %d %d %d", &A, &B, &C, &D);
        if (A > B)
        {
            B + C;
            if (A > B + C)
            {
                B + C + D;
                if (A > B + C + D || A == B + C + D)
                {
                    printf("N\n");
                }
                else if (A < B + C + D)
                {
                    printf("S\n");
                }
            }
            else if (A < B + C)
            {
                A + D;
                if (A + D == B + C || A + D > B + C)
                {
                    printf("N\n");
                }
                else if (A + D < B + C)
                {
                    printf("S\n");
                }
            }
            else if (A == B + C)
            {
                B + C + D;
                if (A > B + C + D || A == B + C + D)
                {
                    printf("N\n");
                }
                else if (A < B + C + D)
                {
                    printf("S\n");
                }
            }
        }
        //-------------------------------------------------------------------------------------------------------------------------------------------------------------------
        else if (A < B)
        {
            A + C;
            if (B > A + C)
            {
                A + C + D;
                if (B = A + C + D || B < A + C + D)
                {
                    printf("N\n");
                }
                else if (B > A + C + D)
                {
                    printf("S\n");
                }
            }
            else if (B < A + C)
            {
                B + D;
                if (B + D == A + C || B + D < A + C)
                {
                    printf("N\n");
                }
                else if (B + D > A + C)
                {
                    printf("S\n");
                }
            }
            else if (B == A + C)
            {
                B + D;
                if (B + D == A + C || B + D < A + C)
                {
                    printf("N\n");
                }
                else if (B + D > A + C)
                {
                    printf("S\n");
                }
            }
        }
        //---------------------------------------------------------------------------------------------------------------------------------------
        else if (A == B)
        {
            B + C;
            A + D;
            if (A + D == B + C || A + C > B + C)
            {
                printf("N\n");
            }
            else if(B+C>A+D)
            {
                printf("S\n");
            }
        }
    }
  return 0;
}
