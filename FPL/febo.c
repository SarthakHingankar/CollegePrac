#include <stdio.h>

void main()
{

    int n, i = 1, a = 0, b = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        int result = a + b;
        printf("%d ", result);
        a = b;
        b = result;
        i++;
    }
}