//the order of n odd numbers and their sum
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n,i,j;
    printf("Set the limit:");
    scanf("%d",&n);
    printf("\n");
    printf("The pattern for odd numbers is:\t");
    for ( i = 1,j=0 ; i <=n; i=i+2)
    {
        printf(" %d ",i);
        j=j+i;
    }

    printf("\nThe sum of the odd numbers is:%d\n",j);
    printf("Thank u!!!!");
    return 0;
}

    
