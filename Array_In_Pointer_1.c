#include <stdio.h>
void incr_arrayPrint(int *a)
{
  for(int i = 0; i < 5; i++)    
    printf("%d ", *(a+i));     
}

void decr_arrayPrint(int *a)
{
  for(int i = 0; i < 5; i++)    
    printf("%d ", *(a-i));     
}

int main()
{
  int arr[] = {10, 15, 20, 25, 30};

  /*for(int i = 0; i < 5; i++)    
    printf("%d ", *(arr+i));
  */   
    
  incr_arrayPrint(arr);
  printf("\n");
  /*decr_arrayPrint(&arr[4]);
  printf("\n");*/
  decr_arrayPrint(arr+4);
   
  return 0;
}