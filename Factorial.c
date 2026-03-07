#include <stdio.h>
int main()
{
  int n, fact = 1;

  printf("Enter any number: ");
  scanf("%d", &n);

  if(n < 0)
  {
        printf("Factorial is not defined for negative numbers.");
        return 0;
  }

  for(int i = 2; i <= n; i++)
    fact = fact * i;
  
    printf("Factorial of %d is %d", n, fact);

    return 0;
}