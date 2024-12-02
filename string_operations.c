#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str2[100], subStr[100];
    int i, length = 0, isPalindrome = 1, isSubstring = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of the string: %d\n", length);

    char reversedStr[100];
    int j = 0;
    for (i = length - 1; i >= 0; i--)
    {
        reversedStr[j++] = str[i];
    }
    reversedStr[j] = '\0';
    printf("Reversed string: %s\n", reversedStr);

    printf("Enter another string for equality check: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int equal = 1;
    for (i = 0; str[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str[i] != str2[i])
        {
            equal = 0;
            break;
        }
    }
    if (equal)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    printf("Enter a substring to check: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';

    int subLength = 0;
    for (i = 0; subStr[i] != '\0'; i++)
    {
        subLength++;
    }

    for (i = 0; i <= length - subLength; i++)
    {
        int match = 1;
        for (int k = 0; k < subLength; k++)
        {
            if (str[i + k] != subStr[k])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            isSubstring = 1;
            break;
        }
    }

    if (isSubstring)
        printf("'%s' is a substring of '%s'.\n", subStr, str);
    else
        printf("'%s' is not a substring of '%s'.\n", subStr, str);

    return 0;
}
