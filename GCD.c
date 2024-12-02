#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int smallestDivisor(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int smallestDiv1 = smallestDivisor(num1);
    int smallestDiv2 = smallestDivisor(num2);

    int gcdResult = gcd(num1, num2);

    printf("Smallest divisor of %d (other than 1): %d\n", num1, smallestDiv1);
    printf("Smallest divisor of %d (other than 1): %d\n", num2, smallestDiv2);
    printf("Greatest Common Divisor (GCD) of %d and %d: %d\n", num1, num2, gcdResult);

    return 0;
}
