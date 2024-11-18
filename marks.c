#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float agri;
    printf("Enter your subject marks\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    agri = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40 && sub4 >= 40 && sub5 >= 40)
    {
        if (agri >= 75)
        {
            printf("You have passed with distinction grade\n");
        }
        else if (agri >= 60 && agri < 75)
        {
            printf("You have passed with first grade\n");
        }
        else if (agri >= 50 && agri < 60)
        {
            printf("You have passed with second grade\n");
        }
        else if (agri >= 40 && agri < 50)
        {
            printf("You have passed with pass grade\n");
        }
    }
    else
    {
        printf("You have failed\n");
    }
}