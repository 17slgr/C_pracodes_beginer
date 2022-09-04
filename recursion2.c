// find sum of n numbers using recursion
#include <stdio.h>

int print_sum(int n);
int main()
{
    int n;
    printf("Enter the number till which the sum has to be calculated: ");
    scanf("%d",&n);
    printf("\nThe sum of %d natural numbers is %d:\n",n,print_sum(n));
    

    return 0;
}

int print_sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    int sumn_1= print_sum(n-1);
    int sumN=sumn_1+n;
    return sumN;
}
