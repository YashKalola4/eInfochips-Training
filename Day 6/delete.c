#include<stdio.h>
void main(){
 int n;
 
 printf("Enter size of array: ");
 scanf("%d", &n);
 
 int arr[n], e;
 printf("Enter %d elements\n", n);
 for(int i= 0; i < n; i++){
  scanf("%d", &arr[i]);
 }
 
 printf("Enter element to delete: ");
 scanf("%d", &e);
 
 // arr = 1 2 3 4 5 => new = 1 2 4 5
 
 // deleted index
 int index = -1;
 for(int i = 0; i < n; i++){
  if(arr[i] == e) {
   index = i;
   break;
  }
 }
 for(int i = index; i < n - 1; i++){
  arr[i] = arr[i + 1];
 }
 printf("Array after deletion: ");
 for(int i=0; i < n; i++){
  printf("%d ", arr[i]);
 }
arr[n-1] = 0;
 printf("\n");
 
 
 
}
