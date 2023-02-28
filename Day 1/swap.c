#include<stdio.h>
void main(){
int num1, num2, temp;

printf("Number 1: ");
scanf("%d",&num1);
printf("Number 2: ");
scanf("%d",&num2);

printf("Before Interchange=> Number 1: %d and Number 2: %d\n", num1, num2);
temp = num1;
num1 = num2;
num2 = temp;
printf("After Interchange=> Number 1: %d and Number 2: %d\n", num1, num2);
}
