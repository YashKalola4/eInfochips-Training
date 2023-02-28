#include<stdio.h>

void main(){
 int length(char *s){
  int len = 0;
  while(*s != '\0'){
   len++;
   s++;
  }
  return len;
 }
 printf("Length: %d\n",length("Yash"));
 char name[20];
 printf("Enter Name: ");
 fgets(name,20,stdin);
 
 puts(name);
 
 
}
