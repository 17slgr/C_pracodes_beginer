#include <stdio.h>
int main(int argc, char const *argv[])
{
   /* printf("lets learn pointer\n");
    int a=76,b=6;
    int* ptra=&a;
    
    printf("the address of pionter to a is  is: %p\n",&ptra);
    printf("The address of a is %p\n",&a);
     printf("The address of a is %p\n", ptra);
      printf("The value of a is %d\n", *ptra);
      printf("The value of a is %d\n", a);*/

      int size,k=0;

    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter the values of the array:\n");
    int A[size],* p=A;
    for (int i = 0; i <size; i++)
    {
      scanf("%d",p+i);
      
    }
    for (int i = 0; i <size; i++)
    {
      
      k=k+* p;
      p++;
    }
   printf("The sum of the array is: ");
   printf("%d",k);
    return 0;
}
