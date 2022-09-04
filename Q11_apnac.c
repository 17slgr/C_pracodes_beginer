//code for to check weather the enterd charachter is uppercase/lowercase/notengllish

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if (ch >='A' && ch<= 'Z')
    
    {
        printf("Upper Case\n");
    }
    else if (ch>='a'&& ch<='z')
    
    {
        printf("Lower case\n");
    }
    
    else
    {
        printf("Not engligh letter\n");
    }
    
    return 0;
}