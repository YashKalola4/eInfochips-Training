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
else { //2354
 rem = 0, rev = 0;
 int last = org/10;
 while(last > 0){
 
 rem = last % 10; 
 last = last / 10;
 
 rev = rev * 10 + rem;
}
 printf("Palindrome made: %d%d\n",org,rev);
 
}
}
