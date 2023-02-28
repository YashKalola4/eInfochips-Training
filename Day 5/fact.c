#include<stdio.h>

void main(){

int num;


printf("Number: ");
scanf("%d", &num);

float fact = 1; 
for(int i = num; i >= 1; i--){
 fact = fact * i;
}

printf("Factorial is: %0.2f\n", fact);
}
