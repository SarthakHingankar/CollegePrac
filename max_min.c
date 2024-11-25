#include <stdio.h>

void main()
{
    int arr[10];

    printf("Enter 10 integers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}