#include<stdio.h>

void main(){

 int n;
 
 printf("Enter size of array: ");
 scanf("%d", &n);
 
 int arr[n];
 
 printf("Enter %d elements\n", n);
 for(int i= 0; i < n; i++){
  scanf("%d", &arr[i]);
 }
 
 printf("Reverse array: \n");
 for(int i = n-1; i >= 0; i--){
  printf("%d ",arr[i]);
 }
 printf("\n");
 
}
