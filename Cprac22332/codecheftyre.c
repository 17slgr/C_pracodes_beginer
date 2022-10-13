#include <stdio.h>
int main(int argc, char const *argv[])
{
    int T, i, j;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        int A[7];
        int k = 0;
        int l = 0;
        for (j = 0; j < 7; j++)
        {

            scanf("%d", &A[j]);
            if (A[j] == 1)
            {
                k = k + 1;
            }
            else if (A[j] == 0)
            {
                l = l + 1;
            }
        }
        if (k>l)
        {
            printf("YES\n");
        }
        else if (k<l)
        {
           printf("NO\n");
        }
        
        
    }

    return 0;
}
