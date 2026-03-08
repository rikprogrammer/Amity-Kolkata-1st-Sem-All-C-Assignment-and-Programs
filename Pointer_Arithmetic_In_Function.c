#include <stdio.h>
void f2(int **n1)
{
  **n1 = **n1 + 4;          
}

void f1(int *n)
{
  *n = *n + 3; 
  f2(&n);
}

int main()
{
  int x = 10;
  f1(&x);
  printf("%d", x);

  return 0;
}
