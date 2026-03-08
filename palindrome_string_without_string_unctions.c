#include <stdio.h>
int main()
{
    char str[100];
    int length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
      length++;

    if(length > 0 && str[length-1] == '\n')
      length--;

    int i = 0, j = length - 1;

    while (i < j) 
    {
        if (str[i] != str[j]) 
        {
            printf("Not a Palindrome String\n");
            return 0;
        }
        
        i++;
        j--;
    }

    printf("Palindrome String\n");

    return 0;
}