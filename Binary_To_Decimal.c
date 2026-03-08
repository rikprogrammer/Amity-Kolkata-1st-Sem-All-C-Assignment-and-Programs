#include <stdio.h>
#include <math.h>
int main()
{
  int bin, dec = 0, i = 0, rem, temp;
  
  printf("Enter any binary numeber:- ");
  scanf("%d", &bin);
  
  temp = bin;
  
  while(temp > 0)
  {
    rem = temp % 10;
    if(rem == 0 || rem == 1)
      temp = temp / 10;    
    else
    {
      printf("Pls enter a binary number");
      return(0);
    }
  }
  
  while(bin > 0)
  {
    rem = bin % 10;
    dec = dec + rem*pow(2, i);
    bin = bin / 10;
    i++;
  }
  
  printf("Decimal Equivalent:- %d", dec);
  
  return 0;
}
