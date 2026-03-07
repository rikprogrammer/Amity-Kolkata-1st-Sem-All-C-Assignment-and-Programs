#include <stdio.h>
#include <string.h>
int main() 
{
    char str[20], str1[20]; // Taking the character array
    int len = 0;
    int i, j;
    char ch;

    printf("Enter any string: ");
    scanf("%s", str);
    
    len = strlen(str); // Finding the length of the string
    
    if(len % 2 == 0) // Checking that the length of string is even or not
    {
      i = 0; 
      //Reversing the string
      for (j = len-1; j >= 0; j--) 
        str1[i++] = str[j];
    }
    else
    {
      i = 0;
      // Replacing the vowels with '*' if length is odd
      while(str[i] != '\0')
      {
        ch = str[i];
        switch(ch)
        {
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
                   str1[i] = '*';
                   break;
          default:
                   str1[i] = str[i];
        }
        i++;
      }
    }
    
    str1[len] = '\0'; // Adding the null terminator at the end of the resulted string
    printf("%s", str1); // Printing the new string
    return 0;
}