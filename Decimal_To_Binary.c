#include <stdio.h>
int main()
{
  int dec, bin[32], i = 0, j;
  
  printf("Enter any decimal numeber:- ");
  scanf("%d", &dec);
  
  if(dec < 0)
  {
    printf("Pls enter a positive integer number");
    return(0);
  }
  
  while(dec > 0)
  {
    bin[i++] = dec % 2;
    dec = dec / 2;
  }
  
  printf("Binary Equivalent:- ");
  for(j = i-1; j >= 0; j--)
    printf("%d", bin[j]);
  
  
  return 0;
}