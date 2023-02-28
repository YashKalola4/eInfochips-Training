#include<stdio.h>
void main(){

float h;
printf("Enter height in feet: ");
scanf("%f", &h);
float mh, cmh, inh;

mh = h / 3.281;
cmh = mh * 100;
inh = h * 12;

printf("Height in Meter: %f, Centimeter: %f and Inch: %f\n",mh,cmh,inh);
}

