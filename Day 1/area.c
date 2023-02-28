#include<stdio.h>
void main(){
int r, l, b;
printf("Radius: ");
scanf("%d",&r);
printf("Length: ");
scanf("%d",&l);
printf("Breadth: ");
scanf("%d",&b);

int c_area = 3.14 * r * r;
int c_circ = 2 * 3.14 * r;
int r_peri = 2 * (l + b);
int r_area = l * b;

printf("Circle Area: %d\n", c_area);
printf("Circle Circumference: %d\n", c_circ);
printf("Rectangle Area: %d\n", r_area);
printf("Rectangle Perimeter: %d\n", r_peri);
}
