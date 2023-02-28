#include<stdio.h>

void main(){

int fCharge, sCharge, tCharge;

printf("Enter service charge for First Airline: ");
scanf("%d", &fCharge);
printf("Enter service charge for Second Airline: ");
scanf("%d", &sCharge);
printf("Enter service charge for Third Airline: ");
scanf("%d", &tCharge);

if(fCharge < sCharge && fCharge < tCharge)
printf("FIRST\n");
else if(sCharge < fCharge && sCharge < tCharge)
printf("SECOND\n");
else
printf("THIRD\n");

}
