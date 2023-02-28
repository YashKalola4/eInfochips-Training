#include<stdio.h>

void main(){

int cAmount;

printf("Sale Amount for CPUs: ");
scanf("%d", &cAmount);

float cCom;

if(cAmount >= 10000 && cAmount < 25000)
cCom = cAmount * 0.08;
else if(cAmount >= 25000)
cCom = (cAmount - 25000) * 0.10 + 2000;

printf("Commission for CPUs: %0.2f", cCom);

}
