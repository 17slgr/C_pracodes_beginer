//print namaste for i input and bonjour for f input using functions
#include <stdio.h>

void printnamaste();
void printbonjour();

char main()
{
    char ch;
label:
    printf("Enter the language for salutation\nF for french and I for Hindi: ");
    scanf("%c", &ch);
    if (ch == 'I' || ch == 'i')
    {
        printnamaste();
    }
    else if ('F' == ch || ch == 'f')
    {
        printbonjour();
    }
    else
    {
        printf("\nWrong input try again\n");
        goto label;
    }
}

void printnamaste()
{
    printf("\nnamaste!!\n");
}
void printbonjour()
{
    printf("\nbonjour!!\n");
}