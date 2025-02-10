#include <stdio.h>

void main()
{
    int total = 0, arr[10];

    printf("Enter 10 integers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        total += arr[i];
    }

    printf("Average of array is %d\n", total / 10);
}