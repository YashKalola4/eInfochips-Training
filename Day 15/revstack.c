#include<stdio.h>
#include<string.h>

char s[10];
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
scanf("%s", s);
 
 for(int i = 0; i < n; i++){
  push(s[i]);
 }
 
 printf("Reverse: ");
 for(int i = 0; i < n; i++){
  printf("%c", pop());
 }
 printf("\n");
}
