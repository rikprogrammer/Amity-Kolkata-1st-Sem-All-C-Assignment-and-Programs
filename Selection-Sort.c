#include <stdio.h>
int main()
{
  int i, j, n, min_ind;
  
  printf("Enter the number of elements in the array:- ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter elements in the array:- ");
  for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    
    
  for(i = 0; i < n-1; i++)
  {
    min_ind = i;
    for(j = i+1; j < n; j++)
    {
      if(arr[j] < arr[min_ind])
        min_ind = j;
    }
    if(i != min_ind)
    {
      arr[i] = arr[i] + arr[min_ind];
      arr[min_ind] = arr[i] - arr[min_ind];
      arr[i] = arr[i] - arr[min_ind];
    }
  }
    
  printf("Array in the ascending order:- ");
  for(i = 0; i < n; i++)
    printf("%d ", arr[i]);
  
  return 0;
}