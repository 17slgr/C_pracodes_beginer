#include <stdio.h>
int main(int argc, char const *argv[])
{ int size,k=0;

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
       printf("%d\t",* p);
       p++;
    }
   
    for (int i = 0; i <size-1; i++)
    {
        if (*p > * (p+i))
        {
           k=(k*0)+ *p;
        }
        else if (*p < * (p+i))
        {
            k=k*0+ * (p+i);
        }
        else if (*p = * (p+i))
        {
            
            k=k+0;
        }
        
         p++;
    
    

    }
    printf("The largest number is:%d",&k);
    printf("Thanuuu!!!!!!!!!");
    return 0;
}
