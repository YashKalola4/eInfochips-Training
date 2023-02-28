#include<stdio.h>

void main(){
 int n;
 
 printf("Enter size of array: ");
 scanf("%d", &n);
 
 int arr[n];
 int sum = 0;
 
 printf("Enter %d elements\n", n);
 for(int i= 0; i < n; i++){
  scanf("%d", &arr[i]);
  sum += arr[i];
 }
 
 int max = arr[0], min = arr[0];
 
 for(int i=1; i < n; i++){
  if(arr[i] > max) max = arr[i];
  if(arr[i] < min) min = arr[i];
 }
 
 printf("Sum : %d\nMax: %d\nMin: %d\nAverage: %d\n", sum, max, min, (sum/n));
 
}
