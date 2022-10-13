//Find the nth prime number

#include<stdio.h>
#include<math.h>
int main()
{
    int  l=0,m=3,k=1;
    int n,i=5,j=2,p;
        
    printf("Enter the value of n: ");
    scanf("%d",&n); 
    if (n==1)
    {
        printf("The 1st prime number is:2.\n");
    }
    else if (n==2)
    {
        printf("The 2nd prime number is:3.\n");
    }   
        for (m=3,i=5;m<=n;i=i+2)
       {
        for ( k=1,j=2 ;  j <= sqrt(i) ; j++    )
         {
           p=i%j;
           k=k*p;
         }
         if  (k==0 && m==n)
               {
               m=m*1;
               continue;    
               } 
               if (k != 0 && m!=n)
               {   
                   m++;
                   continue;
               }
                if (k !=0  && m==n)
              { 
                   printf("The %dth prime number is:%d.\n",n,i );
                   break;
              }
       }
    printf("Thank you for using my services!!\n");
   return 0;
}
        
               
         
              

                   
     
         
         
           
            
            
           
           
        
       
      
                
               
       
       
        
          
           
        
        
        
             
       
         
         
    
           
           
               
               
                
            
    
   
    
    
    
            
            
            
        
     
    
