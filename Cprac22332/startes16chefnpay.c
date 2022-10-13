#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, T;
    scanf("%d", &T);
    for (i = 0; i <= T; i++)
    {
        char A[30];
        int j, k = 0, m = 1, n[j], X, Y;

        scanf("%d %d", &X, &Y);
        for (j = 0; j < 30; j++)
        {
            scanf("%d", &A[j]);
        }
        for (j = 0; j < 30; j++)
        {

            if (A[j] == 1)
            {
                k++;
                
                
            }
            if (A[j] ==A[j+1]&&A[j]==1)
            {
                
                m =m++;
                n[j]=m;
            }
            else if (A[j] == 0 && A[j]==A[j+1])
            {
                m = m * 0;
            }
        }
        int p;
        for (j = 0; j < 30; j++)
        {
            if (n[j]>n[j+1])
            {
                p=n[j];
            }
            else if (n[j]<n[j+1])
            {
               p=n[j+1];
            }
            
            
        }
        
        printf("\n%d\n", (k * X) + (p * Y));
        printf("%d",p);
    }


   return 0;
}
