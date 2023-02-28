#include<stdio.h>

void main(){
 void scan(int *p){
  for(int i = 0; i < 2; i++){
   for(int j = 0; j < 2; j++){
    scanf("%d", p+(i*2)+j);
   }
  }
 }
 int arr[2][2] = {{1,2},{3,4}};
 scan(arr);
 
}
