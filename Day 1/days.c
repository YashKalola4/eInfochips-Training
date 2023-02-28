#include<stdio.h>
void main(){
int days;
printf("Days: ");
scanf("%d",&days);

int year = days / 365;
int ydays = days % 365;
int months = ydays / 30;
int mdays = ydays % 30;
int weeks = mdays / 7;
int remDays = mdays % 7;

printf("%d equals %d year, %d months, %d weeks and %d days\n",days,year,months,weeks,remDays);
}
