#include<stdio.h>
#include<string.h>

void main(){
 char s1[20];
 
 printf("Enter string 1: ");
 gets(s1);
 
 /*for(int i = 0; i < strlen(s1); i++){
  if((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z')) printf("%c", s1[i]);
 }
 
 printf("\n");*/
  char ans[20];
 char* alphaCheck(char *s){
 
  int start=0;
  while(strlen(s)){
   if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
   ans[start] = *s;
   start++;
   }
   *s++;
  }
   ans[start] = '\0';
  return ans;
 }
 printf("String after removal: %s\n",alphaCheck(s1));
}
