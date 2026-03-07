#include <stdio.h>
int main()
{
    int eend, oend, i;
    
    printf("Enter the even series ending point:- ");
    scanf("%d", &eend);
    printf("Enter the odd series ending point:- ");
    scanf("%d", &oend);
    
    if(eend <= 0 || oend <= 0)
    {
      printf("Invalid Input");
      return(0);
    }
    else
    {
      printf("Even series:- ");   
      for(i = 2; i <= eend; i = i+2)
       printf("%d ", i);  
       
      printf("\nOdd series:- "); 
      for(i = 1; i <= oend; i = i+2)
       printf("%d ", i);   
        
    }

    return 0;
}
