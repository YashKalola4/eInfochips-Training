#include<stdio.h>
void main(){
int x, y;
printf("Enter value of x: ");
scanf("%d", &x);
printf("Enter value of y: ");
scanf("%d", &y);

int eq1 = (x*x*x) + (x*x) + x + 5;
int eq2 = (x*x) + (y*y) + (2*x*y) - 10;

printf("Value of Equation 1: %d and Equation 1: %d\n", eq1,eq2);

}
