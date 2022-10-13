#include <stdio.h>
#include <conio.h>
#include <math.h>
struct patient
{
     int PatID, Age;
     char Name[50], Disease[50], Docname[50];

} s[5];

int main()
{
     int i, j;
     printf("Welcome to Patient Directory !!!\n");
     printf("Enter Patient records\n");

     //store records
     for (i = 0; i < 5; ++i)
     {
          printf("\nEnter Patient Id:");
          scanf("%d", &s[i].PatID);
          printf("\nEnter Patient name:");
          scanf("%s", s[i].Name);
          printf("\nEnter Patient age:");
          scanf("%d", &s[i].Age);
          printf("\nEnter Patient Disease:");
          scanf("%s", s[i].Disease);
     }

     printf("To find a particular record,Enter the Patient ID:");
     int k, m;
     scanf("%d", &k);
     for (i = 0; i < 5; ++i)
     {
          if (s[i].PatID == k)
          {

               printf("\n The available record for the given patient ID is as follows:\n");
               printf(" The patient Id is: %d\n", s[i].PatID);
               printf(" Patient's age is:%d\n", s[i].Age);
               printf(" The patient Name is:%s\n", s[i].Name);
               printf("Patient's disease is: %s\n", s[i].Disease);
               break;
          }
          else if (s[i].PatID != k)
          {
               continue;
          }
     }

     printf("\nThanku!!!!");
     return 0;
}
