#include<stdio.h>
void main(){

int num;
printf("Number: ");
scanf("%d",&num);

int d1 = num % 10;
num = num / 10; //1234
int d2 = num % 10;
num = num / 10; //123
int d3 = num % 10;
num = num / 10; //12
int d4 = num % 10;
num = num / 10; //1
int d5 = num;

d1 = (d1 + 1) % 10;
d2 = (d2 + 1) % 10;
d3 = (d3 + 1) % 10;
d4 = (d4 + 1) % 10;
d5 = (d5 + 1) % 10;

printf("New Number is: %d %d %d %d %d\n", d5,d4,d3,d2,d1);
}
