#include<stdio.h>
#include<string.h>

void main(){
char expr[10];

printf("Enter String: ");
scanf("%s", expr);

 int check = 0;
for(int i = 0; i < strlen(expr); i++){
 char current = expr[i];
 int j = i+1;
 char found;
 while(j < strlen(expr)) {
  if(expr[j] == '}' || expr[j] == ')' || expr[j] == ']'){ // running loop untill found closing
   found = expr[j];
   break;
  }
  else{
   current = expr[j]; // updating current with opening 
  }
  j++;
 }
 if(current == '{' && found == '}') check = 1;
 else if(current == '[' && found == ']') check = 1;
 else if(current == '(' && found == ')') check = 1;
}
if(check) printf("Balanced\n");
else printf("Not balanced\n");
}
