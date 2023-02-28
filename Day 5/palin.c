#include<stdio.h>

void main(){

int num;


printf("Number: ");
scanf("%d", &num);

int org = num;

int rem, rev = 0;
while(num > 0){
 
 rem = num % 10; 
 num = num / 10;
 
 rev = rev * 10 + rem;
}

if(org == rev) printf("Palindrome\n");
else printf("Not a Palindrome\n");
}
