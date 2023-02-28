#include<stdio.h>

void main(){

float salary, saving;

printf("Gross Salary: ");
scanf("%f", &salary);
printf("Savings: ");
scanf("%f", &saving);

float taxable;

if(saving <= 100000)
taxable = salary - saving;
else
taxable = salary - 100000;

float tax = 0;

if(taxable > 100000 && taxable <= 200000){
tax = 100000 * 0 + (taxable - 100000) * 0.1;
}
else if(taxable > 200000 && taxable <= 500000){

tax = 100000 * 0 + (taxable - 100000 - 100000) * 0.1 + (taxable - 200000) * 0.2;
}
else if(taxable > 500000){
tax = 100000 * 0 + (taxable - 100000) * 0.1 + (taxable - 200000) * 0.2 + (taxable - 500000) * 0.3;
}

printf("Taxable: %0.2f\n", taxable);
printf("Tax: %0.2f\n", tax);
}
