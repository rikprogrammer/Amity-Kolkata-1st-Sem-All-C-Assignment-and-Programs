#include <stdio.h>
int main() 
{
  char name[100];
  int i;

  printf("Enter full name: ");
  gets(name); 

  int start = 0;
  while (name[start] == ' ')
    start++;

  int lastSpace = -1;
  for (i = start; name[i] != '\0'; i++) 
  {
    if (name[i] == ' ')
      lastSpace = i;
  }

  if (lastSpace == -1)
  {
    printf("%s\n", name + start);
    return 0;
  }

  printf("Abbreviated Name: ");
  if (name[start] != '\0') 
    printf("%c.", name[start]);

  for (i = start; i < lastSpace; i++) 
  {
    if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
     printf("%c.", name[i+1]);
  }

  printf(" ");
  for (i = lastSpace + 1; name[i] != '\0'; i++)
   putchar(name[i]);

  printf("\n");    
  
  return 0;
}