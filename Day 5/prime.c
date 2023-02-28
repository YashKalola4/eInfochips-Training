#include<stdio.h>

void main(){

/*int num, f=0;


printf("Number: ");
scanf("%d", &num);

for(int i=2; i <= (num/2); i++){
	if(num % i == 0) {
	 f=1;
	 break;
	}
}
if(!f) printf("%d is prime\n", num);
else printf("%d is not a prime\n", num);*/
int range;
printf("Range: ");
scanf("%d", &range);

for(int i = 1; i <= range; i++){
	
	int f=0;
	for(int j=2; j <= (i/2); j++){
	if(i % j == 0) {
	 f=1;
	 break;
	}
  }
  if(!f) printf("%d is prime\n", i);
}

}
