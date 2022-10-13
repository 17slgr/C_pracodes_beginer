#include <stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{   
    printf("------------------------------Dipendra Singh------------------------------------\n");
    int i,k;
    printf("-------------------College1-------------------------\n");
    printf("Enetr the number of participiants for each team in the order of IT<space>ECE<space>CSE\n");
    int I[3],E[3],C[3];
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the members of college1 team%d in the specified:\n",i+1);
        scanf("%d %d %d",&I[i],&E[i],&C[i]);
    }
    
    printf("The team info for college1 is:\n");
    for ( i = 0; i <3; i++)
    {
        printf("\t%d\t%d\t%d\n",I[i],E[i],C[i]);
    }
    
 printf("-------------------College2-------------------------\n");
    printf("Enetr the number of participiants for each team in the order of IT<space>ECE<space>CSE\n");
    int j[3],e[3],c[3];
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the members of college2 team%d in the specified:\n",i+1);
        scanf("%d %d %d",&j[i],&e[i],&c[i]);
    }
    
    printf("The team info for college2 is:\n");
    for ( i = 0; i <3; i++)
    {
        printf("\t%d\t%d\t%d\n",j[i],e[i],c[i]);
    }

    printf("_________________________________________Dipendra Singh--------------_______________-----------______________________\n");
    printf("Now, the sum of all participants of IT is:\n");
      int sumi=0;
     for ( i = 0; i <3; i++)
     { 
        sumi=sumi+I[i]+j[i];
     }
     printf("%d\n",sumi);
 printf("Now, the sum of all participants of ECE is:\n");
      int sume=0;
     for ( i = 0; i <3; i++)
     { 
        sume=sume+E[i]+e[i];
     }
     printf("%d\n",sume);

   printf("Now, the sum of all participants of CSE is:\n");
      int sumc=0;
     for ( i = 0; i <3; i++)
     { 
        sumc=sumc+C[i]+c[i];
     }
     printf("%d\n",sumc);
  
  printf("Thanku");

    return 0;
}
