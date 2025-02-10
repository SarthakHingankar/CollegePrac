#include <stdio.h>

void main()
{

    int m, v, p;

    printf("Enter mass of object in kg: ");
    scanf("%d", &m);
    printf("Enter velocity of object in m/s: ");
    scanf("%d", &v);

    p = m * v;
    printf("The momentum of the object is: %d\n", p);
}