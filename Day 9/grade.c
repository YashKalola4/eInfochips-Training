#include<stdio.h>

void main(){
 char grade(int marks){
  if(marks <= 100 && marks >= 80) return 'A';
  else if(marks < 80 && marks >= 60) return 'B';
  else if(marks < 60 && marks >= 40) return 'C';
  else return 'F';
 }
 
 printf("Enter Marks: ");
 int marks;
 scanf("%d", &marks);
 printf("Grade: %c\n", grade(marks));
}
