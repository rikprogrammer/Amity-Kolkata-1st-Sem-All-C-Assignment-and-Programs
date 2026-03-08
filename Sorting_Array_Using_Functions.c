#include <stdio.h>
void b_sort(int arr[], int sz)
{
  for(int i = 1; i < sz-1; i++)
  {
    for(int j = 0; j < sz-i; j++)
    {
      if(arr[j] > arr[j+1])
      {
        arr[j] = arr[j] + arr[j+1];
        arr[j+1] = arr[j] - arr[j+1];
        arr[j] = arr[j] - arr[j+1];
      }    
    }
  }
}

int main()
{
  int n;
  
  printf("Enter the size of the array:- ");
  scanf("%d", &n);
  
  if(n <= 0)
  {
    printf("Invalid Input");
    return 0;
  }
  
  int arr[n];
  
  printf("Enter values in the array:- ");
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
 
 printf("Before sorting, the array:- ");
 for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);

 printf("\n");    
 b_sort(arr, n);    
  
 printf("After sorting, the array:- ");
 for(int i = 0; i < n; i++)
    printf("%d ", arr[i]); 

  return 0;
}