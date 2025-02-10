#include <stdio.h>
#include <math.h>

void main()
{
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0)
    {
        result = sqrt(num);
        printf("Square root of the number %lf is: %lf\n", num, result);
    }
    else
    {
        printf("Error! Number must be positive.\n");
    }
}
