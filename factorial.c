#include <stdio.h>

void main()
{
    double num, fact;

    printf("Enter a number: ");
    scanf("%lf", &num);

    fact = 1;
    for (double i = num; i > 0; i--)
    {
        fact *= i;
    }

    printf("Factorial of %.0lf is %.0lf\n", num, fact);
}