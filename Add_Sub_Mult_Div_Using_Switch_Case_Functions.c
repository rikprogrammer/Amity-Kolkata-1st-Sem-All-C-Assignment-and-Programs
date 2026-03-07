#include <stdio.h>
int add(int a1, int a2)
{
  int sum = a1 + a2;
  return sum;
}

int sub(int b1, int b2)
{
  int diff;
  if(b1 > b2)
    diff = b1 - b2;
  else
    diff = b2 - b1;
    
  return diff;
}

int prod(int c1, int c2)
{
  int mult = c1 * c2;
  return mult;
}

int divis(int d1, int d2)
{
  double d = d1 / d2;
  return d;    
}

int main()
{
  int num1, num2, ch;
  
  printf("Enter the 1st number:- ");
  scanf("%d", &num1);
  printf("Enter the 2nd number:- ");
  scanf("%d", &num2);

  printf("Enter your choice:- \n");
  printf("1. Addition \n");
  printf("2. Substraction \n");
  printf("3. Multiplication \n");
  printf("4. Division \n");
  scanf("%d", &ch);
  
  switch(ch)
  {
    case 1: 
            printf("Addition is:- %d", add(num1, num2));
            break;
    case 2: 
            printf("Difference is:- %d", sub(num1, num2));
            break;
    case 3: 
            printf("Multiplication is:- %d", prod(num1, num2));
            break;
    case 4: 
            if(num2 == 0)
            {
              printf("Division by zero is not possible");
              return 0;
            }
            printf("Division is:- %d", divis(num1, num2));
            break;
    default: 
            printf("WRONG CHOICE !!!");
  }

  return 0;
}