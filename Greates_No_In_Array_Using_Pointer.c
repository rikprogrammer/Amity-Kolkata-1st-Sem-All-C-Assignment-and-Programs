#include <stdio.h>
int grtval(int sz, int *a)
{
  int max = *a;    
  for(int i = 0; i < sz; i++)
  {
    if(*a > max)
      max = *a;
    
    *a++;  
  }
  
  return max;
}

int main()
{
  int n;
  
  printf("Enter the size of array:- ");
  scanf("%d", &n);
  
  if(n <= 0)
  {
    printf("Invalid Input");
    return 0;
  }
  
  int arr[n];
  printf("Enter values in the array:- ");
  for(int i = 0; i < n; i++)
    scanf("%d ", &arr[i]);
    
  printf("Greatest number in the array:- %d", grtval(n, arr));      
    
   return 0;
}
