#include<stdio.h>

void main(){
 int x, y, ans = 1; 
 float negans = 1;
 
 printf("X: ");
 scanf("%d", &x);
 printf("Y: ");
 scanf("%d", &y);
 
 for(int i=1; i<=y;i++){
  ans *= x;
 }
 
 /*if(y < 0){
  negans = 1 / ans;
 }*/
 
 printf("Ans: %d\n", ans);
}
