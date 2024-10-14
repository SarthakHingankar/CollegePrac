#include <stdio.h>

void main()
{
    int num;
    int count = 0;
    int fact[50];
    printf("Enter your number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            fact[count] = i;
            count += 1;
        }
    }

    int prime = 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 2; j < fact[i]; j++)
        {
            if (fact[i] % j == 0)
            {
                prime = 0;
                break;
            }
            else
            {
                prime = 1;
            }
        }
        if (prime == 1)
        {
            printf("%d\n", fact[i]);
        }
    }
}
