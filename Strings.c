#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to calculate length of the string
int calculateLength(char str[]) {
    return strlen(str);
}

// Function to reverse the string
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to check equality of two strings
int checkEquality(char str1[], char str2[]) {
    return strcmp(str1, str2) == 0;
}

// Function to check if the string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

// Function to check if one string is a substring of another
int isSubstring(char str[], char sub[]) {
    if (strstr(str, sub) != NULL) {
        return 1; // Substring found
    }
    return 0; // Substring not found
}

int main() {
    char str[100], subStr[100], str2[100];

    // Input the main string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character from fgets

    // 1. Calculate the length of the string
    int length = calculateLength(str);
    printf("Length of the string: %d\n", length);

    // 2. Reverse the string
    char reversedStr[100];
    strcpy(reversedStr, str);
    reverseString(reversedStr);
    printf("Reversed string: %s\n", reversedStr);

    // 3. Check equality of two strings
    printf("Enter another string for equality check: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline character

    if (checkEquality(str, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // 4. Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // 5. Check if one string is a substring of another
    printf("Enter a substring to check: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';  // Remove newline character

    if (isSubstring(str, subStr)) {
        printf("'%s' is a substring of '%s'.\n", subStr, str);
    } else {
        printf("'%s' is not a substring of '%s'.\n", subStr, str);
    }

    return 0;
}
