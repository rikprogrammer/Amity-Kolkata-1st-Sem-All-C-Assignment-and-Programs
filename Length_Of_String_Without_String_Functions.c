#include <stdio.h>
int main()
{
  char str[100];
  int i = 0, length = 0;

  printf("Enter any string: ");
  scanf("%s", str);

  while(str[i] != '\0')
  {
    length++;
    i++;
  }

  if(length > 0 && str[length - 1] == '\n')
    length--;

  printf("Length of the string = %d\n", length);

  return 0;
}
