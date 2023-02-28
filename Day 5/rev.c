#include<stdio.h>

void main(){

int num;

printf("Number: ");
scanf("%d", &num);

int rem, rev = 0;
while(num > 0){
 
 rem = num % 10; 
 num = num / 10;
 
 rev = rev * 10 + rem;
}

printf("Reverse: %d\n", rev);
}
