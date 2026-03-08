#include <stdio.h>
void arrayPrint(int *a)
{
  for(int i = 0; i < 5; i++)    
    printf("%d ", *a++);    
}

void arrayPrint1(int a1[])
{
  for(int i = 0; i < 5; i++)    
    printf("%d ", a1[i]);    
}

int main()
{
  int arr[5] = {10, 15, 20, 25, 30};
  int *p = arr;
  int *p1 = &arr[0];
    
  //for(int i = 0; i < 5; i++)    
  // printf("%d %d \n", *p++, *p1++);

  //arrayPrint(arr); // Or arrayPrint(&arr[0])
  arrayPrint1(arr);
  return 0;
}