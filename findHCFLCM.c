#include <stdio.h>
int main()
{
    int x,y,R,m,n;

    printf("Enter the value of x:\t");
    scanf("%d",&x);
    m=x;

    printf("\n");
    printf("Enter the value of y:\t",y);
    scanf("%d",&y);
    n=y;

    printf("\n");

    while(n!=0)

        {
            R=m%n;
            m=n;
            n=R;
        }

    printf("The HCF is:%d.\n",m);
    printf("The LCM is:%d.\n",((x*y)/m) );

    printf("Thank uu!!!");
    return 0;
}
