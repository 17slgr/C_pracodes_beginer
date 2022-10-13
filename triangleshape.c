//printint a triangle 12345
/*                    1234
                      123
                      12
                      1
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        
  
    
   
        for (k=1,j=n; k<=i,j>=i ; j--,k++)
        
            printf("%d",k);
            printf("\n");
             

        
        
    }
    return 0;
}
