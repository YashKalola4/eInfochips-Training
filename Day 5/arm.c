#include<stdio.h>

void main(){
/*
int num;


printf("Number: ");
scanf("%d", &num);

int org = num;

int digit, cubesum = 0;

while(num > 0){
 
 digit = num % 10; 
 num = num / 10;
 
 cubesum += digit * digit * digit;
}

if(org == cubesum) printf("Armstrong\n");
else printf("Not a Armstrong\n"); */

int range;
printf("Range: ");
scanf("%d", &range);

for(int i=1; i <= range; i++){
	 int digit, cubesum = 0;
	 int num = i;

	 while(num > 0){
	 
	 digit = num % 10; 
	 num = num / 10;
	 
	 cubesum += digit * digit * digit;
	}
  if(i == cubesum)
   printf("%d is armstrong\n", i);
}

}
