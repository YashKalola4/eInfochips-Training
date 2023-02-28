#include<stdio.h>
#include<string.h>
char expr[10];
char stack[10];
int top = -1, n = 10;

void push(int element){
 if(top >= n){
  printf("Stack overflow!\n");
 }
 top++;
 stack[top] = element;
}

int pop(){
 if(top == -1){
  printf("Stack is empty!\n");
  return -1;
 }

 int e = stack[top];
 top--;
 
 return e;
}

void main(){
printf("Enter String: ");
scanf("%s", expr);

for(int i = 0; i < strlen(expr); i++){
 if(expr[i] == '{' || expr[i] == '(' || expr[i] == '['){
  push(expr[i]);
 }
 else{
  if(expr[i] == '}' && stack[top] == '{') pop();
  else if(expr[i] == ')' && stack[top] == '(') pop();
  else if(expr[i] == ']' && stack[top] == '[') pop();
 }
}

if(top == -1) printf("Balanced\n");
else printf("Not balanced\n");
}
