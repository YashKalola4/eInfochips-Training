#include<stdio.h>

void main(){
 
 int arr[5] = {12,12,-1,1,3};
 int min = 9999, index1 = 0, index2 = 0;
 for(int i = 0; i < 5; i++){
  for(int j = i+1; j < 5; j++){
   int sum = arr[i] + arr[j];
   int sumdiff = 0 - sum;
   // min sundiff will be considered
   if(sumdiff < min) {
   min = sumdiff;
   index1 = i;
   index2 = j;
   }
  }
 }
 
 printf("Elements will be %d and %d\n", arr[index1], arr[index2]);
}
