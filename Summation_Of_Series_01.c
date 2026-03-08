#include <stdio.h>
int main()
{
  int n, i; 
  double sum = 0.0, fact = 1.0;
  printf("Enter the value of n:- ");
  scanf("%d", &n);
  
  if(n <= 0)
  {
    printf("Invalid Input");
    return (0);
  }
  
  for(i = 1; i <= n; i++)
  {
    fact = fact * i;
    sum = sum + (i/fact);
  }
  
  printf("%lf", sum);
  return 0;
}