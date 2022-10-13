#include <stdio.h>
#include <conio.h>
#include <math.h>
struct patient
{
     int PatID, Age;
     char Name[50], Disease[50], Docname[50];
     float Tbill, Pbill, Dbill;
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
          printf("\nEnter Doctor's name:");
          scanf("%s", s[i].Docname);
          printf("\nEnter Total bill:");
          scanf("%f", &s[i].Tbill);
          printf("\nEnter Bill paid till now:");
          scanf("%f", &s[i].Pbill);
          printf("\nBill due : Rs %f ", s[i].Dbill = (s[i].Tbill - s[i].Pbill));
          printf("\n---------------------------------------------------------------------------------------------\n");
     }
     printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
     printf("______________________________________________________|||||||||||_____________________________________\n");
     printf("\nTo find a particular record,Enter the Patient ID:");
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
               printf("Patient's Doctor name is: %s\n", s[i].Docname);
               printf("\nTotal bill: %f ", s[i].Tbill);

               printf("\nBill paid till now: %f ", s[i].Pbill);

               printf("\nBill due : Rs %f ", s[i].Dbill);
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
