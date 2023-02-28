#include<stdio.h>
void main(){
char name[10];
int year;
char city[20];

printf("Name: ");
scanf("%s",name);

printf("Birth Year: ");
scanf("%d",year);

printf("City: ");
scanf("%s",city);
int current = 2023;
int age = current - year;

printf("Your name is %s\n", name);
printf("You are %d year old\n", age);
printf("You are from %s\n", city);
}
