
//print all odd numbers from 5-50 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    for ( i = 5; i <= 50; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    

    return 0;
}
