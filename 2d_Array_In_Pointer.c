#include <stdio.h>
int main()
{
  int mat[4][3] = {
                   {10, 20, 30},
                   {40, 50, 60},
                   {70, 80, 90},
                   {15, 25, 35}
                  };
  
  // int *p = &mat[0][0]; 
  int *p = mat[0];
  
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 3; j++)
      printf("%d ", *p++);
    printf("\n");  
  }
  
  int (*p1)[3]; // Pointer to an array
  p1 = mat;
  printf("\n");
  /*for(int i = 0; i < 4; i++)
  {
    printf("%d ", *(p1[i]));
  }  
  
  printf("\n");
  printf("\n");*/
  
  for(int i = 0; i < 4; i++)
  {
    int *x = p1[i];
    for(int j = 0; j < 3; j++)
      printf("%d ", *x++);
    printf("\n");  
  }
  
  return 0;
}