#include<stdio.h>
#include<string.h>

void main(){
 char s1[20], s2[20];
 char* mystrcat(char *s1, char *s2){
  int start = strlen(s1);
  
  while(*s2 != '\0'){
   s1[start] = *s2;
   *s2++;
   start++;
  }
  
  s1[start] = '\0';
  
  return s1;
 }
 
 printf("Enter string 1: ");
 gets(s1);
 
 printf("Enter string 2: ");
 gets(s2);
 
 printf("Concated by Built-in Function: %s\n",strcat(s1,s2));
 printf("Concated by UDF: %s\n",mystrcat(s1,s2));
}
