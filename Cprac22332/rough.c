#include <stdio.h>
#include <math.h>
int main()
{
     int i, j, k=0, p=0, q=0, r=0, s=0;

     
     printf("enter the size of the array:");
     scanf("%d", &i);
     int a[i];

     j = i;
     printf("enter the elemants of the array:\n");
     for (i = 0; i < j; i++)
     {
          scanf("%d", &a[i]);
     }
     for (i = 0; i < j; i++)
     {
          if (a[i] > 0)
          {
               k = k + 1;
               if (a[i] % 2 == 0)

                    r = r + 1;
 
               else

                    q = q + 1;
          }

          else if (a[i] < 0)
          {
               p = p + 1;
               if (a[i] % 2 == 0)

                    r = r + 1;

               else

                    q = q + 1;
          } 
          else {
                s+=1;
          }
     }
     printf("/n");
     printf(" the number of positive numbers is:%d.\n", k);
     printf(" the number of negative numbers is:%d.\n", p);
     printf(" the number of odd numbers is:%d.\n", q);
     printf(" the number of even numbers is:%d.\n", r);
     printf(" the number of zeros is:%d.\n", s);
     printf("Thank u!!");
     return 0;
}