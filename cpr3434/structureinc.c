#include <stdio.h>
# include <string.h>
struct Student

{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(int argc, char const *argv[])
{
    struct Student harry,ravi,shubham;
    harry.id=34;
    ravi.id=35;
    shubham.id=36;
    harry.marks=466;
    ravi.marks=467;
    shubham.marks=468;
    harry.fav_char='p';
    ravi.fav_char='q';
    shubham.fav_char='r';
    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name , "Shubham Kumar");
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry's name is: %s\n" ,harry.name);
    printf("Shubham got %d marks\n",shubham.marks);
    printf("Shubham's name is: %s\n", shubham.name);
    return 0;
}
