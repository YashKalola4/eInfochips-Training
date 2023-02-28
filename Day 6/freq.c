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
 for(int i = 0; i < n; i++){
  int count = 1;
  for(int j = 0; j < n; j++){
   if(i != j && arr[i] == arr[j]) count++;
  }
  printf("%d ==> %d\n", arr[i], count);
 }	
}
