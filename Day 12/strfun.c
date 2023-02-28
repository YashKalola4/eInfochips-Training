#include<stdio.h>
#include<string.h>

void main(){
 char s1[10], s2[10] = "Hello";
 
 int mystrlen(char *s){
  
  int len = 0;
 
  while(*s != '\0'){
   len++;
   s++; 
  }
  return len;
 }
 
 char* mystrcpy(char *s1, char *s2){
  while(*s2 != '\0'){
   *s1 = *s2;
   s1++;
   s2++; 
  }
  
  return s1;
 }
 printf("Enter String 1: ");
 gets(s1);
 

 printf("Length by UDF: %d\n",mystrlen(s1));

 int len = strlen(s1);
 printf("Length by Built-in Function: %d\n", len);
 
 printf("New string after copying from s2 by Built-in Function: %s\n",strcpy(s1, s2));
 printf("New string after copying from s2 by UDF: %s\n",mystrcpy(s1, s2));
}
