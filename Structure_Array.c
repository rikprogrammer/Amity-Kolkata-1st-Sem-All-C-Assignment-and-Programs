#include <stdio.h>
struct stud
{
  int sid;
  char name[20];
  char email[50];
  float age;
};

void print(struct stud s2[])
{
  for(int i = 0; i < 3; i++)
  {
    printf("\n");  
    printf("Student %d ID:- %d \n", i+1, s2[i].sid);
    printf("Student %d name:- %s \n", i+1, s2[i].name);
    printf("Student %d email:- %s \n", i+1, s2[i].email);
    printf("Student %d age:- %f \n", i+1, s2[i].age);
  }
}

void printing(struct stud *s3)
{
  for(int i = 0; i < 3; i++)
  {
    printf("\n");  
    printf("Student %d ID:- %d \n", i+1, s3->sid);
    printf("Student %d name:- %s \n", i+1, s3->name);
    printf("Student %d email:- %s \n", i+1, s3->email);
    printf("Student %d age:- %f \n", i+1, s3->age);
    s3++;
  }
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
  
  struct stud s1[3];
  for(int i = 0; i < 3; i++)
  {
    printf("Enter student %d ID:- ", i+1);
    scanf("%d", &s1[i].sid);
    printf("Enter student %d name:- ", i+1);
    scanf("%s", s1[i].name);
    printf("Enter student %d email:- ", i+1);
    scanf("%s", s1[i].email);
    printf("Enter the age of student %d:- ", i+1);
    scanf("%f", &s1[i].age);  
  }    
  
  /*for(int i = 0; i < 3; i++)
  {
    printf("\n");  
    printf("Student %d ID:- %d \n", i+1, s1[i].sid);
    printf("Student %d name:- %s \n", i+1, s1[i].name);
    printf("Student %d email:- %s \n", i+1, s1[i].email);
    printf("Student %d age:- %f \n", i+1, s1[i].age);
  }*/

  //print(s1);
  printing(s1);

  return 0;
}