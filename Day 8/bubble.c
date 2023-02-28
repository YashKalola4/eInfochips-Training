#include<stdio.h>

void main(){
 int arr[5] = {10, 30, 20, 50, 40};
 
 for(int i = 0; i < 5; i++){
  for(int j = i + 1; j < 5 - i; j++){
   if(arr[i] > arr[j]){    
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
   }
  } 
 }
 
 printf("Sorted Array: \n");
 for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
 printf("\n");
}
