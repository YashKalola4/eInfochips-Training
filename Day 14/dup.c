#include<stdio.h>
#include<string.h>
void main(){
 char s[20];
 char temp[20];
 printf("Enter string: ");
 gets(s);
 
 printf("%c", s[0]);
 temp[0] = s[0];
 for(int i = 1; i < strlen(s); i++){
  //a
  int flag = 1;
   for(int j = 0; j < strlen(temp); j++){
    if(s[i] == temp[j]){
     flag = 0;
     break;
    }
   }
   
   if(flag) {
   printf("%c",s[i]);
   temp[i] = s[i];
   }
 
 }
 printf("\n");
}
