#include<stdio.h>

void main(){
 struct student{
  char name[10];
  int roll;
 };
 
 struct student s1, s2, s[2];
 /*
 printf("Enter student name: ");
 scanf("%s", s1.name);
 
 printf("Enter student roll no: ");
 scanf("%d", &s1.roll);
 
 printf("Name is %s\n", s1.name);
 printf("Roll No is %d\n", s1.roll);
 */
 struct student *p;
 for(int i = 0; i < 2; i++){
  p = &s[i];
  printf("Enter name for student %d: ", i+1);
  scanf("%s", p->name);
  printf("Enter roll no for student %d: ", i+1);
  scanf("%d", &p->roll);
 }
 p=0;
 for(int i = 0; i < 2; i++){
  p=&s[i];
  printf("Name for student %d: %s\n", i+1, *p.name);
  printf("Roll no for student %d: %d\n", i+1, p->roll);
 }
}
