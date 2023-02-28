#include<stdio.h>
void main(){
int days, price;

printf("Days Late: ");
scanf("%d", &days);
printf("Price: ");
scanf("%d", &price);
float fine = 0;
if(days <= 5)
fine = days * 5;
else if(days >= 6 && days <= 10){
fine = 5 * 5 + (days - 5) * 10;
}
else if(days > 10 && days <= 30){
fine = 5 * 5 + (5 * 10) + (days - 10) * 20; 
}
else if(days > 30){
fine = 5 * 5 + (5 * 10) + (days - 10) * 20; 
 if(fine < price)
 fine = price;
}

printf("Fine: %0.2f\n", fine);
}
