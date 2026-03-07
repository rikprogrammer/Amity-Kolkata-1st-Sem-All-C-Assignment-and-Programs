#include <stdio.h>
int main()
{
  int r, c, k, s, rows1, cols1, rows2, cols2;
  
  printf("Enter the number of rows of 1st matrix:- ");
  scanf("%d", &rows1);
  printf("Enter the number of columns of 1st matrix:- ");
  scanf("%d", &cols1);
  
  printf("Enter the number of rows of 2nd matrix:- ");
  scanf("%d", &rows2);
  printf("Enter the number of columns of 2nd matrix:- ");
  scanf("%d", &cols2);
  
  if(cols1 != rows2)
  {
    printf("1st matrix column should be equal to 2nd matrix rows");
    return(0);
  }
  else if(rows1 <= 0 || rows2 <= 0 || cols1 <= 0 || cols2 <= 0)
  {
    printf("Invalid Input");
    return(0);
  }
  
  int mat1[rows1][cols1], mat2[rows2][cols2], multi[rows1][cols2];
  
  printf("Enter the values in the 1st matrix:- ");
  for(r = 0; r < rows1; r++)
  {
    for(c = 0; c < cols1; c++)
      scanf("%d", &mat1[r][c]);
  }
  
  printf("Enter the values in the 2nd matrix:- ");
  for(r = 0; r < rows2; r++)
  {
    for(c = 0; c < cols2; c++)
      scanf("%d", &mat2[r][c]);
  }
  
  for(r = 0; r < rows1; r++)
  {
    for(c = 0; c < cols2; c++)
    {
      s = 0;       
      for(k = 0; k < rows2; k++)
        s = s + mat1[r][k]*mat2[k][c];
    
      multi[r][c] = s;
    }
  }
  
  printf("1st matrix:- \n");
  for(r = 0; r < rows1; r++)
  {
    for(c = 0; c < cols1; c++)
      printf("%d ", mat1[r][c]);
      
    printf("\n");  
  }
  
  printf("2nd matrix:- \n");
  for(r = 0; r < rows2; r++)
  {
    for(c = 0; c < cols2; c++)
      printf("%d ", mat2[r][c]);
      
    printf("\n");  
  }
  
  printf("Matrix Multiplication:- \n");
  for(r = 0; r < rows1; r++)
  {
    for(c = 0; c < cols2; c++)
      printf("%d ", multi[r][c]);
      
    printf("\n");  
  }
  
  return 0;
}