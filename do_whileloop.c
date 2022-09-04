#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
do
{
   printf("Enter the number:");
   scanf("%d",&n);
   printf("\n");

} while (n%7==0);
printf("The last number entered is not a multiple of 7.\n");

    return 0;
}
