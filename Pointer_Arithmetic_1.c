#include <stdio.h>
int main()
{
  int a = 10;
  double b = 25.5;
  char c = 'x';
  
  int *p1 = &a;
  int *p11 = &a;
  double *p2 = &b;
  char *p3 = &c;

  //printf("%d", *p1);
  printf("%u %u %u", p1, p2, p3);
  printf("\n");
  printf("%u %u %u", ++p1, ++p2, ++p3);
  //printf("\n%u", (p2+3));
  //printf("%u", (p1-p11));

  //Base Address + (Variable's Data Type size * Increment Value) 
  //Base Address - (Variable's Data Type size * Increment Value) 
  
  return 0;
}
