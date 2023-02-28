#include<stdio.h>

void main(){
 int sum(int a, int b){
  return a+b;
 }
 
 void sum1(int a, int b){
  printf("%d + %d = %d\n", a, b, sum(a,b));
 }
 
 void sum2(float a, float b){
  printf("%f + %f = %f\n", a, b, a+b);
 }
 
 printf("%d\n", sum(sum(5,6),3));
 sum1(10,20);
 sum2(50.12, 100);
}
