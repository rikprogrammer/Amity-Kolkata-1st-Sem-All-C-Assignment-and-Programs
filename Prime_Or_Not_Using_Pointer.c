#include <stdio.h>
int isPrime(int *num)
{
  int flag = 1;
  for(int i = 2; i < *num / 2; i++)
  {
    if(*num % i == 0)
    {
      flag = 0;
      break;
    }  
  }
  
  return flag;
}

int main()
{
  int n;
  printf("Enter any numebr:- ");
  scanf("%d", &n);
    
  if(isPrime(&n))
    printf("%d is a Prime Number", n);
  else
    printf("%d is not a Prime Number", n);
    
  return 0;
}
