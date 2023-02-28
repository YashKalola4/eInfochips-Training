#include<stdio.h>
#include<string.h>

void main(){
 char s1[100] = "Hello World Hello thisWorld Hello Worldthis Hello World ";
 char word[20] = "World";
 int freq = 0;
 for(int i = 0; i < strlen(s1); i++){
 int flag = 1;
  for(int j = 0; j < strlen(word); j++){
   if(s1[i+j] != word[j]) {
   flag = 0;
   break;
   }
  }
  
  if(flag) freq++;
 }
 
 printf("Count: %d\n", freq);
}
