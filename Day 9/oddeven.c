#include<stdio.h>

void main(){
 int isEven(int num) {
  if(num % 2 == 0) return 1;
  else return 0;
 }
 
 if(isEven(5)) printf("Even");
 else printf("Odd");
}
