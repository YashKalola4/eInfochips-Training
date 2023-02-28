#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
 char s1[20];
 int wordCount = 1, lineCount = 0, digitCount = 0, alphaCount = 0;
 
 printf("Enter string 1: ");
 gets(s1);
 
 
 for(int i = 0; i < strlen(s1); i++){
  if((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z')) alphaCount++;
  else if(s1[i] == ' ') wordCount++;
  else if(s1[i] == '\n') lineCount++;
  else if(s1[i] >= '0' && s1[i] <= '9') digitCount++;
 }
 
 printf("Words: %d\nLines: %d\nDigits: %d\nAlphabets: %d\n", wordCount, lineCount, digitCount, alphaCount);
}
