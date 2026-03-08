#include <stdio.h>
int main()
{
  struct s1
  {
    int sid;
    double age;
    char gen;
  };
  
  union s2
  {
    int sid;
    double age;
    char gen;
  };
  
  struct s1 a;
  printf("%d \n", sizeof(a));
  
  union s2 b;
  printf("%d \n", sizeof(b));
  
  printf("Enter the gender of the student:- ");
  scanf("%c", &b.gen);
  printf("Enter the age of the student:- ");
  scanf("%lf", &b.age);
  printf("Enter the student ID:- ");
  scanf("%d", &b.sid);
  
  printf("Student ID:- %d \n", b.sid);
  printf("Student age:- %lf \n", b.age);
  printf("Student gender:- %c \n", b.gen);
  
  return 0;
}