#include<stdio.h>
#include<string.h>

void main(){
 char s1[10] = "PPALAP";
 int valid = 1;
 int ACount = 0;
 
 char late[5] = "LLL";
 for(int i = 0; i < strlen(s1); i++){
  
  if(s1[i] == 'A') {
	  ACount++; 
	  if(ACount >= 2) {
		  valid = 0; 
		  break;
      }
   }
  
  int flag = 1;
  for(int j = 0; j < strlen(late); j++){
   if(s1[i+j] != late[j]) {
   flag = 0;
   break;
   }
  }
  
  if(flag) {
  valid = 0; 
  break;
  }
 }
 
 if(valid) printf("Eligible for award!");
 else printf("Nope!");
}
