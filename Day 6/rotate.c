
#include<stdio.h>

void main(){
 int n;
 
 printf("Enter size of array: ");
 scanf("%d", &n);
 
 int arr[n], equi;
 
 printf("Enter %d elements\n", n);
 for(int i= 0; i < n; i++){
  scanf("%d", &arr[i]);
 }
 int temp = arr[0];
 
 for(int i = 0; i < n-1; i++){
  arr[i] = arr[i+1];
 }
 arr[n-1] = temp;
 
 printf("Rotated array elements: \n");
 for(int i= 0; i < n; i++){
  printf("%d ", arr[i]);
 }
 
 printf("\n");
}
