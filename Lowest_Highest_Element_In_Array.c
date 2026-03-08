#include <stdio.h>
int main()
{
  int i, n, min, max;
  
  printf("Enter the number of elements in the array:- ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter elements in the array:- ");
  for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  min = arr[0];
  max = arr[0];

  for(i = 1; i < n; i++)
  {
    if(arr[i] < min)
      min = arr[i];
    else if(arr[i] > max)
      max = arr[i];
  }
  
  if(min == max)
  {
    printf("All the elements in the array are equal");
    return(0);
  }
  
  printf("Lowest element in the array:- %d \n", min);
  printf("Highest element in the array:- %d", max);
  
  return 0;
}