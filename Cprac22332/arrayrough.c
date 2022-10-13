#include <stdio.h>
void printaray(int x[]);
 main()
{ 
    {
    int x[15];
    for ( int i = 0; i < 15; i++)
    {
        x[i]=i;

    }
    printaray(x);
    }
    void printaray(int x[])
    
       { for (int i = 0; i < 15; i++)
        {
            printf("Value in the array %d\n",x[i]);
        }
       }
    
    void printdetail (int x[])
    {
        for ( int i = 0; i <15; i++)
        {
           printf("Value in the array %d and address is %16lu \n",x[i],&x[i]);
        }
        
    }

    
}
