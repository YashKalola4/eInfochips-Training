#include<stdio.h>

void main(){
 int fact(int num){
  int ans;
  if(num == 0) return 1;
  else ans = num * fact(num - 1);
  printf("%d\n", ans);
  
  return ans;
 }
 
 printf("%d\n", fact(5));
}
