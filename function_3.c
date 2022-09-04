//program for printing table of n till k using functions
#include <stdio.h>

void printable(int n,int k)// parameter/formal parameter
{
    printf("The table of %d till %d is:\n",n,k);
    for (int i = 0; i < k; i++)
    {
        int m = n*(i+1);
        printf("%d X %d = %d\n",n,i+1,m);
    }
    
}


int main()
{
    int n,k;
   printf("Enter the number whose table is required:");
   scanf("%d",&n);
   printf("Enter the range of the table:");
   scanf("%d",&k);
   printable(n,k);//argumrnt / actual parameter
   return 0;
}


