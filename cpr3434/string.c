#include<stdio.h>
#include<string.h>

void printStr(char str[])
   {
       int i=0;
       while (str[i]!='\0')
       {
           printf("%c",str[i]);
           i++;
          // printf("\n");
       }
   }  
int main(int argc, char const *argv[])
{
   char str[35];
   gets(str);
   printf("Using custom function printStr: \n");
   printStr(str);
   printf("\n");
   printf("%s\n",str);
   printf("Using puts: \n");
puts(str);

    return 0;
}

/*char str[54];
gets (str);
printf("%s,")*/