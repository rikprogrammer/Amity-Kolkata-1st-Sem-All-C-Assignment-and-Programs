#include <stdio.h>
struct addr
{
  int hno;
  char road[30];
  int pin;
};

struct stud
{
  int sid;
  char name[30];
  struct addr a;
};

int main()
{
  struct stud stud1;
     
  printf("Enter the student ID:- ");
  scanf("%d \n", &stud1.sid);
  printf("Enter the student name:- ");
  //scanf("%s", stud1.name);
  gets(stud1.name);
  printf("Enter the house no.:- ");
  scanf(" %d", &stud1.a.hno);
  printf("Enter the road name:- ");
  scanf("%s", stud1.a.road);
  printf("Enter the pin:- ");
  scanf("%d", &stud1.a.pin);
  
  printf("Student ID:- %d \n", stud1.sid);
  printf("Student name:- %s \n", stud1.name);
  printf("House Number:- %d \n", stud1.a.hno);
  printf("Road Name:- %s \n", stud1.a.road);
  printf("Pin:- %d \n", stud1.a.pin);
  
  return 0;
}