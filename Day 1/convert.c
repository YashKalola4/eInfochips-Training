#include<stdio.h>
void main(){
float dist;
printf("Distance(Km): ");
scanf("%f",&dist);

float inInch = dist * 39370.1;
float inMeter = dist * 1000;
float inFt = dist * 3240.8;

printf("Inch: %0.2f, Meter: %0.2f, Ft: %0.2f\n", inInch, inMeter, inFt);

}
