#include <stdio.h>
int main(int argc, char const *argv[])
{
    int T, P, N, X, Y, i, j, k;
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d %d %d %d", &N, &P, &X, &Y);
        int A[N];
        for (j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }
        int n = 0,p=0;
        for (k = 0; k < P; k++)
        {
            if (A[k] == 0)
            {
                n = n + X;
            }
            else if (A[k] == 1)
            {
                p = p + Y;
            }
        }
        printf("%d\n",n+p);
    }

    return 0;
}
