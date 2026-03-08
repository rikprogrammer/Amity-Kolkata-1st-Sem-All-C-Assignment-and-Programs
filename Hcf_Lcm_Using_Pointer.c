#include <stdio.h>
int hcf(int *num1, int *num2)
{
  int a = *num1, b = *num2;
  while(a != b)
  {
    if(a > b)
      a = a - b;
    else
      b = b - a;
  }
  
  return a;
}

int lcm(int *v1, int *v2, int hcf)
{
  return ((*v1 * *v2) / hcf);
}

int main()
{
  int n1, n2;
  
  printf("Enter the 1st numeber:- ");
  scanf("%d", &n1);
  printf("Enter the 2nd numeber:- ");
  scanf("%d", &n2);
  
  int gcf = hcf(&n1, &n2);
  
  printf("LCM:- %d", lcm(&n1, &n2, gcf));
  printf("\n");
  printf("HCF:- %d", gcf);
  
  return 0;
}