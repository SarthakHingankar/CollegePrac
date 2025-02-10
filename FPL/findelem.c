#include <stdio.h>

void main()
{
    int arr[10];
    int n, flag = 0;

    printf("Enter 10 integers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number you want to find: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        if (n == arr[i])
        {
            flag = 1;
            printf("%d is found in the array.\n", n);
            break;
        }
    }

    if (!flag)
    {
        printf("%d is not found in the array.\n", n);
    }
}