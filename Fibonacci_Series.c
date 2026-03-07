#include <stdio.h>
int main()
{
    int n, first = 1, second = 0, next, i;
    
    printf("Enter the numeber of terms:- ");
    scanf("%d", &n);
    
    if(n <= 0)
    {
      printf("Invalid Input");
      return(0);
    }
    else
    {
      printf("Fibonacci Series:- ");
      printf("%d ", second);
      for(i = 2; i <= n; i++)
      {
        next = first + second;  
        printf("%d ", next);  
        first = second;
        second = next;
      }
    }

    return 0;
}
