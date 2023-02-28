#include<stdio.h>
void main(){

int num;
printf("Number: ");
scanf("%d",&num);

int d1 = num % 10;
num = num / 10; //1234
int d2 = num % 10;
num = num / 10; //123
int d3 = num % 10;
num = num / 10; //12
int d4 = num % 10;

printf("Sum of first and last digit is: %d\n", d1+d4);
}
