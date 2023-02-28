#include<stdio.h>

void main(){
 int n, pos=0, neg=0, zero=0,odd=0, even=0, num;
 printf("Loop Count: ");
 scanf("%d", &n);
  
 for(int i = 1; i <= n; i++){
  
  printf("Number: ");
  scanf("%d", &num);
  
  if(num < 0) neg++;
  else if(num > 0) pos++;
  else zero++;
  
  if(num%2 == 0) even++;
  else odd++;
 }
 printf("Positive: %d, Negative: %d, Zeros: %d, Odd: %d, Even: %d\n", pos,neg,zero,odd,even);
}
