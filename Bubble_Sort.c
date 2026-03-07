#include <stdio.h>
int main()
{
  int n, i, j, status;  

  printf("Enter the number of elements:- ");
  scanf("%d", &n);
  
  if(n <= 0)
  {
    printf("Invalid Input");
    return 0;
  }
  
  int arr[n];

  printf("Enter elements in the array:- ");
  for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    
  for(i = 1; i <= n-1; i++)
  {
    status = 0;
    for(j = 0; j < n-i; j++)
    {
      if(arr[j] > arr[j+1])
      {
         arr[j] = arr[j] + arr[j+1];
         arr[j+1] = arr[j] - arr[j+1];
         arr[j] = arr[j] - arr[j+1];
         status = 1;
      }
    }
    if(status == 0)
       break;
  }
  
  printf("Array in the ascending order:- ");
  for(i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}