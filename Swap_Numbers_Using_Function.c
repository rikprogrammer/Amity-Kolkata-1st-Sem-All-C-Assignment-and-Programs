#include <stdio.h>
void swap(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

int main()
{
  int n1, n2;
     
  printf("Enter the 1st number:- ");
  scanf("%d", &n1);
  printf("Enter the 2nd number:- ");
  scanf("%d", &n2);
  
  printf("Before swapping, the numebrs are:- %d %d \n", n1, n2);
  swap(&n1, &n2);
  printf("Before swapping, the numebrs are:- %d %d", n1, n2);
  
  return 0;
}