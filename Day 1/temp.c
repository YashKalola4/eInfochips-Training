#include<stdio.h>
void main(){
float temp;
printf("Temperature in F: ");
scanf("%f", &temp);

float tempInC = ((temp - 32) * 5) / 9;

printf("Temperature in C: %0.2f\n", tempInC);
}
