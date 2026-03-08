#include <stdio.h>
int main()
{
  int r, c, rows, cols;
  
  printf("Enter the number of rows of the matrix:- ");
  scanf("%d", &rows);
  printf("Enter the number of columns of the matrix:- ");
  scanf("%d", &cols);
  
  if(rows <= 0 || cols <= 0)
  {
    printf("Invalid Input");
    return(0);
  }
  
  int mat[rows][cols], trans[cols][rows];
  
   printf("Enter the values in the matrix:- ");
  for(r = 0; r < rows; r++)
  {
    for(c = 0; c < cols; c++)
      scanf("%d", &mat[r][c]);
  }
  
   for(r = 0; r < rows; r++)
  {
    for(c = 0; c < cols; c++)
      trans[c][r] = mat[r][c];
  }
  
  printf("Original Matrix:- \n");
  for(r = 0; r < rows; r++)
  {
    for(c = 0; c < cols; c++)
      printf("%d ", mat[r][c]);
      
    printf("\n");  
  }
  
  printf("Transposed Matrix:- \n");
  for(r = 0; r < cols; r++)
  {
    for(c = 0; c < rows; c++)
      printf("%d ", trans[r][c]);
      
    printf("\n");  
  }
  
  return 0;
}