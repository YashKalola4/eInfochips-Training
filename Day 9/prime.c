#include<stdio.h>

void main(){

 int isPrime(int n){
 int check = 1;
  for(int i = 2; i <= (n / 2); i++){
   if((n % i) == 0) {
    check = 0;
    break;
   }
  }
  
  return check;
 }
 for(int i = 0; i <= 1000; i++){
  if(isPrime(i)) printf("%d ", i);
 }
 printf("\n");
}
