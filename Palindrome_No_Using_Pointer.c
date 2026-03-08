#include <stdio.h>
#include <stdbool.h>
bool palindrome(int *num)
{
  int temp = *num;
  int rev = 0;
  while(temp != 0)
  {
    int d = temp % 10;
    rev = (rev*10) + d;
    temp = temp / 10;
  }
  
  if(rev == *num)
    return true;
  else
    return false;
}

int main()
{
  int n;
  
  printf("Enter any numeber:- ");
  scanf("%d", &n);
  
  if(palindrome(&n))
    printf("%d is a Palindriome Number", n);
  else
    printf("%d is not a Palindriome Number", n);

  return 0;
}