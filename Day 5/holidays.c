#include<stdio.h>

void main(){

int noOfHolidays;
int total = 8;

printf("No. of additional holidays: ");
scanf("%d", &noOfHolidays);

for(int i=0; i < noOfHolidays; i++){
	int h;
	
	printf("Holiday date: ");
	scanf("%d", &h);
	
	if(h != 6 && h != 7 && h != 13 && h != 14 && h != 20 && h != 21 && h != 27 && h != 28) total++;
  }
 printf("Total holidays: %d\n", total);
}
