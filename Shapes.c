#include <stdio.h>
int main(int argc, char const *argv[])
{
    int option, sq_side, Lenght, Breadth, tri_lines;

    printf("Entre the code for the pattern:\n1-Square.\n2-Rectangle\n3-Equilateral Triangle(upright)\n4-Right angled triangle(HRupright)\n5-Right angled triangle(HR,inverted)\n");
    scanf("%d", &option);
    switch (option)
    {
        // code for square
    case 1:

        printf("Enter the side size:");
        scanf("%d", &sq_side);
        for (int i = 0; i < sq_side; i++)
        {
            printf("\t\t\t");
            for (int j = 0; j < sq_side; j++)
            {
                printf(" @ ");
            }
            printf("\n");
        }
        break;
        // code for rectangle
    case 2:

        printf("Enter the Length and Breadth:");
        scanf("%d %d", &Lenght, &Breadth);
        for (int i = 0; i < Breadth; i++)
        {
            printf("\t\t\t");
            for (int j = 0; j < Lenght; j++)
            {
                printf(" $ ");
            }
            printf("\n");
        }

        break;

    case 3:
        printf("Enter the number of lines for the triangle:");
        scanf("%d", &tri_lines);

        for (int k = 0, i = tri_lines; k<tri_lines, i> 0; k++, i--)
        {
            for (int j = 0; j < i - 1; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <= k; j++)
            {
                printf("@ ");
            }
            printf("\n");
        }

        break;

    case 4:
        printf("Enter the number of lines:");
        scanf("%d", &tri_lines);
        for (int i = 0; i < tri_lines; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("! ");
            }
            printf("\n");
        }

        break;
    case 5:
        printf("Enter the number of lines:");
        scanf("%d", &tri_lines);
        for (int i = tri_lines; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("! ");
            }
            printf("\n");
        }

        break;
    }

    return 0;
}
