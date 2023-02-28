#include<stdio.h>

void main(){
int n, i, count = 0;
printf("Enter n: ");
scanf("%d", &n);
 for(i = 1; i <= n; i++){
  if(i % 5 == 0) {
  count += 1;
  printf("%d\n", i);
  }
 }
 printf("Count: %d\n", count);
}
