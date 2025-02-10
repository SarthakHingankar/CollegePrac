#include <stdio.h>

int main()
{
    int num1, num2, i, smallestDiv1, smallestDiv2, gcd, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    smallestDiv1 = num1;
    for (i = 2; i <= num1 / 2; i++)
    {
        if (num1 % i == 0)
        {
            smallestDiv1 = i;
            break;
        }
    }

    smallestDiv2 = num2;
    for (i = 2; i <= num2 / 2; i++)
    {
        if (num2 % i == 0)
        {
            smallestDiv2 = i;
            break;
        }
    }

    int a = num1;
    int b = num2;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    printf("Smallest divisor of %d (other than 1): %d\n", num1, smallestDiv1);
    printf("Smallest divisor of %d (other than 1): %d\n", num2, smallestDiv2);
    printf("Greatest Common Divisor (GCD) of %d and %d: %d\n", num1, num2, gcd);
}
