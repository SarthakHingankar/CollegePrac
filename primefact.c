#include <stdio.h>

void main()
{

    int num, a;

    printf("Enter a number: ");
    scanf("%d", &num);
    a = num;

    for (int i = 2; i < num; i++)
    {
        while (a % i == 0)
        {
            a = a / i;
            printf("%d\n", i);
        }
    }
}