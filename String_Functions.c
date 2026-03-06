#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nLength of str1 = %d", strlen(str1));
    printf("\nLength of str2 = %d\n", strlen(str2));

    strcpy(str3, str1);
    strrev(str3);
    printf("\nReverse of str1 = %s", str3);

    strcpy(str3, str2);
    strrev(str3);
    printf("\nReverse of str2 = %s\n", str3);

    strcpy(str3, str1);
    printf("\nCopy of str1 into str3 = %s\n", str3);

    strcat(str1, str2);
    printf("\nConcatenated string (str1 + str2) = %s\n", str1);

    int cmp = strcmp(str1, str2);
    if(cmp == 0)
        printf("\nBoth strings are equal\n");
    else if(cmp > 0)
        printf("\nstr1 is greater than str2\n");
    else
        printf("\nstr1 is smaller than str2\n");

    printf("\nUppercase of str2: %s", toupper(str2));
    printf("\nLowercase of str2: %s", tolower(str2));

    return 0;
}