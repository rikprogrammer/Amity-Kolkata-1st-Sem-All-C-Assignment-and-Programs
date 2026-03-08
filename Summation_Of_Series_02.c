#include <stdio.h>
#include <math.h>
double factorial(double num)
{
  int i; 
  double fact = 1.0;    
  for(i = 2; i <= num; i++)
    fact = fact * i;
    
  return fact;    
}

int main()
{
  int n, i, s = -1; 
  double sum = 1.0, power = 2.0, top;
  printf("Enter the value of n:- ");
  scanf("%d", &n);
  
  if(n <= 0)
  {
    printf("Invalid Input");
    return (0);
  }
  
  for(i = 2; i <= n; i++)
  {
    top = pow(n, power); 
    // printf("%lf -- %lf ", top, f);
    sum = sum + s*(top/(factorial(power)));
    power = power + 2;
    s = s * (-1);
  }
  
  printf("%lf", sum);
  return 0;
}