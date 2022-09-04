// Armstrong number detection for any index
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, temp_divisor, temp_quotient = 0;
    int no_of_digits, num, sum = 0;
    printf("Enter the number of digits in the number:\t");
    scanf("%d", &no_of_digits);
    printf("Enter the number:\t");
    scanf("%d", &num);
    j = num;
    temp_divisor = pow(10, no_of_digits - 1);

    for (i = 0; i < no_of_digits; i++)
    {
        temp_quotient = j / temp_divisor;
        j = j % temp_divisor;

        sum = sum + pow(temp_quotient, no_of_digits);
        temp_divisor = temp_divisor / 10;
    }

    if (sum == num)
    {
        printf("Yes the entered number is an armstrong number\n");
    }
    else
    {
        printf("The entered number is not an armstrong number\n");
    }

    return 0;
}