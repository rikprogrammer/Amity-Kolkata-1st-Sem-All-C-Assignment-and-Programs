#include <stdio.h>
int main()
{
  int choco, box, chocoineb, chocohidd;
  
  printf("Enter the number of chocolates:- "); // Taking input the number of chocolates
  scanf("%d", &choco);
  
  printf("Enter the number of boxes:- "); // Taking input the number of boxes
  scanf("%d", &box);
  
  if(choco <= 0 || box <= 0) 
  {
    printf("Invalid Input");
    return 0; // Terminating the program
  }
  
  if(choco % 2 != 0) // Checking that the number of chocolates is even or not
    choco--;
  
  if(choco < box)
  {
    printf("Invalid Input");
    return 0; // Terminating the program
  }
  
  chocoineb = choco / box; // Finding the number of chocolates in each box
  chocohidd = choco % box; // Finding the number of chocolates hidden
 
  printf("Each box gets %d chocolates \n", chocoineb); 
  printf("Hidden:- %d", chocohidd);
  
  return 0;
}