#include <stdio.h>
int main(int argc, char const *argv[])
{
    int T, i, j;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        int R[5], D = 0, I = 0, E = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &R[j]);
        }

        for (j = 0; j < 5; j++)
        {
            if (R[j] == 0)
            {
                D++;
            }
            else if (R[j] == 1)
            {
                I++;
            }
            else if (R[j] == 2)
            {
                E++;
            }
        }

        if (I == E)
        {
            printf("DRAW\n");
        }
        else if (I > E)
        {
            printf("INDIA\n");
        }
        else if (E > I)
        {
            printf("ENGLAND\n");
        }
    }
    return 0;
}
