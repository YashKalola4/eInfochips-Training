#include<stdio.h>
#include<string.h>

void main(){
 char s1[20], s2[20];
 
 int mystrcmp(char *s1, char *s2){
  int ans = 0;
  while(strlen(s1) || strlen(s2)){
  ans += *s1 - *s2;
  if(ans != 0) break;
  s1++;
  s2++;
  }
  
  return ans;
 }
 
 printf("Enter string 1: ");
 gets(s1);
 
 printf("Enter string 2: ");
 gets(s2);
 
 printf("S1: %s\n", s1);
 printf("S2: %s\n", s2);
 printf("strcmp: %d\n",strcmp(s1,s2));
 if(strcmp(s1,s2)) printf("Strings are not same\n");
 else printf("Both strings are same\n");
 
 printf("UDF: %d\n", mystrcmp(s1, s2));
}
