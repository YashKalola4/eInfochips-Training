#include<stdio.h>

void main() { 
 int num;
 
 printf("Enter num: ");
 scanf("%d", &num);
 
 // 49
 int count = 0;
 while(count <= 50 && num != 1){
  int res = 0;
  while(num > 0){
  int d1 = num % 10;
  num = num / 10;
  res += d1 * d1;
 }
 num = res;
 count++;
}
 
 if(count > 50) printf("Number doesn't seems to be happy!\n");
 else if(num == 1) printf("Number is happy!!\n");
}
