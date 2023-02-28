#include<stdio.h>

int arr[5], n = 5, top = -1;

void push(int element){
 if(top >= n){
  printf("Stack overflow!\n");
 }
 top++;
 arr[top] = element;
 printf("Element %d pushed\n", arr[top]);
}

int pop(){
 if(top == -1){
  printf("Stack is empty!\n");
  return -1;
 }

 int e = arr[top];
 top--;
 
 return e;
}

int peep(){
	if(top == -1){
	  printf("Stack is empty!\n");
	  return 1;
	 }
	 return arr[top];
}

void main(){
 push(1);
 push(2);
 push(3);
 
 printf("Element %d popped\n",pop());
 printf("Element %d popped\n",pop());
 
 printf("Top: %d\n",peep());
 
}
