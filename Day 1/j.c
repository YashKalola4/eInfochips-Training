#include<stdio.h>
void main(){

int men = 52;
int totalLit = 48;
int menLit = 35;
int population = 80000;

int menPopu = (men*population)/100;
int womenPopu = population - menPopu;
int litPopu = (totalLit*population)/100; //38400
int menLitPopu = (menLit*menPopu)/100; //14560
int menIllitPopu = litPopu - menLitPopu; //23,840 - Ans
printf("%d",menIllitPopu);
}
