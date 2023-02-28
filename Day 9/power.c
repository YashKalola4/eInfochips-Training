#include<stdio.h>
 #include<math.h>
void main(){
 int power(int n, int p){
  int ans = 1;
  for(int i = 0; i < p; i++){
   ans *= n;
  }
  
  return ans;
 }
 
 printf("Power: %d\n", power(2,4));
 printf("Power Fun: %lf\n", pow(5,6));
}
