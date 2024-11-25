#include <stdio.h>

void main()
{
    int n, arr[10], feq = 0;

    printf("Enter 10 integers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to find: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            feq++;
        }
    }

    if (!feq)
    {
        printf("The number %d does not appear in the array\n", n);
    }
    else
    {
        printf("The number %d appears %d times in the array\n", n, feq);
    }
}