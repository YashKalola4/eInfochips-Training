#include<stdio.h>
void main(){

int amt;
printf("Amount: ");
scanf("%d", &amt);

int hundreds = amt / 100;
int hrem = amt % 100; // 60
int fiftys = hrem / 50;
int frem = hrem % 50; // 10
int tens = frem / 10;

printf("%d 100s, %d 50s and %d 10s\n", hundreds,fiftys,tens);

}

