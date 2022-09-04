// area of figures using functions
#include <stdio.h>

float arsquare(float side);
float arcircle(float radius);
float arrectangle(float L, float B);
float main(int argc, char const *argv[])
{
    int n;
    float side, radius, L, B;
    printf("Enter \n1.Area of square\n2.Area of circle\n3.Area of rectangle\n:- ");
    scanf("%d", &n);
    if (n == 1)
    {
        arsquare(side);
    }
    else if (n == 2)
    {
        arcircle(radius);
    }
    else if (n == 3)
    {
        arrectangle(L, B);
    }

    return 0;
}

float arsquare(float side)
{
    printf("Enter the side of the square:");
    scanf("%f", &side);
    printf("The area of the square is: %f\n", side * side);
}
float arcircle(float radius)
{
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    printf("The area of the square is: %f\n", (3.14 * radius * radius));
}
float arrectangle(float L, float B)
{
    printf("Enter the length and breadth of the rectangle :");
    scanf("%f %f", &L, &B);
    printf("The area of the ractangle is: %f\n", L * B);
}