#include <stdio.h>
int main()
{
    int year;
    
    printf("Enter any year:- ");
    scanf("%d", &year);
    
    if (year <= 0)
    {
      printf("Invalid input");
      return(0);
    }
    else
    {
      if((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        printf("Year %d is a leap year", year);
      else
        printf("Year %d is not a leap year", year);
    }

    return 0;
}
