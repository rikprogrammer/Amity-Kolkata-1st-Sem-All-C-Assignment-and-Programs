#include <stdio.h>
#include <stdlib.h>
int main()
{
  struct s1
  {
    int sid;
    double age;
    char gen;
  };
  
  struct s1 *a;
  printf("%d \n", sizeof(a));
  
  a = (struct s1 *)malloc(sizeof(struct s1));
  
  int *x = (int *)malloc(sizeof(int));
  
  printf("Enter the gender of the student:- ");
  scanf("%c", &a->gen);
  printf("Enter the age of the student:- ");
  scanf("%lf", &a->age);
  printf("Enter the student ID:- ");
  scanf("%d", &a->sid);
  
  printf("Student ID:- %d \n", a->sid);
  printf("Student age:- %lf \n", a->age);
  printf("Student gender:- %c \n", a->gen);
  
  return 0;
}