#include<stdio.h>
void main(){
int base;
printf("Base Salary: ");
scanf("%d",&base);

float da = 0.4 * base;
float hra = 0.2 * base;
float gross = base + da + hra;

printf("Gross Salary: %0.2f\n", gross);
}
