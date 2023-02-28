#include<stdio.h>
void main(){

int bq, pq, sq;
int item;
printf("Burger => 150 Rs. | Pizza => 300 Rs. | Sandwitch => 100 Rs.");
printf("No. of Burgers(Enter 0 if you dont want): ");
scanf("%d", &bq);
printf("No. of Pizzas(Enter 0 if you dont want): ");
scanf("%d", &pq);
printf("No. of Sandwitches(Enter 0 if you dont want): ");
scanf("%d", &sq);

float b_bill, p_bill, s_bill;

if(bq > 5)
b_bill = bq * 150 - (bq * 150 * 0.1);
else
b_bill = bq * 150;

if((pq * 300) > 1000)
p_bill = pq * 300 - (pq * 300 * 0.15);
else
p_bill = pq * 300;

if((sq * 100) > 500)
s_bill = sq * 100 - (sq * 100 * 0.20);
else
s_bill = sq * 100;

float total = (b_bill + p_bill + s_bill) * 1.12;

printf("Total bill after 12 percent GST: %0.2f Rs.\n", total);









}
