//print hello world n number of times using recursion
#include <stdio.h>

void helloprint(int n);

int main(int argc, char const *argv[])
{
    printf("Enter the number of times you want to print: ");
    int n;
    scanf("%d",&n);
   helloprint(n);
    return 0;
}

void helloprint(int n)
{
    if (n==0)
    {
        return;
    }
    printf("Hello World\n");
    helloprint(n-1);
    
}