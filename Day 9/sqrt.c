#include<stdio.h>

void main(){
int sqr(int a){
 return a*a;
}

void sqr1(int a){
 printf("%d * %d = %d\n", a,a,a*a);
}

printf("Square is: %d\n", sqr(5));
sqr1(4);
}
