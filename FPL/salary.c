#include <stdio.h>

void main()
{
    int salary, hra, da, total_salary;

    printf("Enter your basic slary: ");
    scanf("%d", &salary);

    hra = 0.2 * salary;
    da = 1.5 * salary;
    total_salary = salary + hra + da;

    printf("Your H.R.A is: %d\n", hra);
    printf("Your D.A is: %d\n", da);
    printf("Your total salary is: %d\n", total_salary);
}