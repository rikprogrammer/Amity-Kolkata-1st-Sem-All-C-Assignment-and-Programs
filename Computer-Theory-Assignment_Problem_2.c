#include <stdio.h>
int main()
{
  int nol, nole, noll;
  
  printf("Enter the number of leaves:- "); //Taking the number of leaves as input
  scanf("%d", &nol);
  
  //Calculating the number of leaves eaten and left
  if(nol % 5 == 0) // Checking that the number of leaves is a multiple of 5 or not
  {
    if(nol % 2 == 0) // Checking that the number of leaves is even or not
     nole = nol / 2;
    else
     nole = (nol-1) / 2;
  }
  else
    nole = 3;

  noll = nol - nole - 1;
  
  printf("Turbo eats %d leaves \n", nole); // Printing the number of leaves that Turbo eats
  printf("Leaves left:- %d", noll); // Printing the number of leaves left
  
  return 0;
}
