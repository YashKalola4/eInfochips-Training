#include<stdio.h>

void main(){

int num;

printf("Number: ");
scanf("%d", &num);

int sum = 0, digit;
while(num > 0){
 
 digit = num % 10; 
 num = num / 10;
 
 sum = sum + digit;
}

printf("Sum: %d\n", sum);
}
