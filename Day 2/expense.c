#include<stdio.h>
void main(){
int q,p;

printf("Quantity: ");
scanf("%d", &q);
printf("Price: ");
scanf("%d", &p);

float expense;

if(q > 1000)
expense = q * p - (q * p * 0.1);
else
expense = q * p;

printf("Total Expense: %0.2f\n", expense);


}
