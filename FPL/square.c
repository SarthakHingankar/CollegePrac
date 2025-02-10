#include <stdio.h>

void main()
{
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0)
    {
        result = num * num;
        printf("Square of the number %lf is: %lf\n", num, result);
    }
    else
    {
        printf("Error! Number must be positive.\n");
    }
}
