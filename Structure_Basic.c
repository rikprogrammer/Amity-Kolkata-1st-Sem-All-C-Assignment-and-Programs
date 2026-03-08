#include <stdio.h>
struct stud
{
  int sid;
  char name[20];
  char email[50];
  float age;
};

void print(struct stud s2)
{
  printf("Student ID:- %d \n", s2.sid);
  printf("Student name:- %s \n", s2.name);
  printf("Student email:- %s \n", s2.email);
  printf("Student age:- %f \n", s2.age); 
}

void printing(struct stud *s3)
{
  printf("Student ID:- %d \n", s3->sid);
  printf("Student name:- %s \n", s3->name);
  printf("Student email:- %s \n", s3->email);
  printf("Student age:- %f \n", s3->age); 
}

int main()
{
  /*struct stud
  {
    int sid;
    char name[20];
    char email[50];
    float age;
  };*/
  
  struct stud s1;
  printf("%d \n", sizeof(s1));
  
  struct stud *s4;
  printf("%d \n", sizeof(s4));
  
  printf("Enter the student ID:- ");
  scanf("%d", &s1.sid);
  printf("Enter the student name:- ");
  scanf("%s", s1.name);
  printf("Enter the student email:- ");
  scanf("%s", s1.email);
  printf("Enter the age of the student:- ");
  scanf("%f", &s1.age);
  
  s4 = &s1;
  
  /*printf("Student ID:- %d \n", s1.sid);
  printf("Student name:- %s \n", s1.name);
  printf("Student email:- %s \n", s1.email);
  printf("Student age:- %f \n", s1.age);*/

  //print(s1);
  //printing(&s1);
  printing(s4);
  
  return 0;
}