#include<stdio.h>
int main()
{
   int i=10;
   int *p=&i;
   ds(&i);
   printf("%d",*p);
   printf("%d",*p);

}
void ds(int *p)
{
 int i=11;
 *p=i;
 printf("%d",*p);
}