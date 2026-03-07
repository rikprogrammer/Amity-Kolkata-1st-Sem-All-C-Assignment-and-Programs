#include <stdio.h>
int factorial(int *num)
{
  int fact = 1;    
  for(int i = 2; i <= *num; i++)
    fact = fact * i;
    
  return fact;    
}

void factorial1(int *num, int *fact1)
{
  for(int i = 2; i <= *num; i++)
    *fact1 = *fact1 * i;
        
}

int main()
{
  int n, i, f;
  int f1 = 1;
  printf("Enter the value of n:- ");
  scanf("%d", &n);

  f = factorial(&n);
  factorial1(&n, &f1);
  
  printf("Factorial:- %d\n", f);
  printf("Factorial:- %d", f1);
  return 0;
}
