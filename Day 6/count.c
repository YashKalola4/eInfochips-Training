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
 
 int p = 0, neg = 0, z = 0, o = 0, e = 0;
 
 for(int i= 0; i < n; i++){
  if(arr[i] > 0) p++;
  else if(arr[i] < 0) neg++;
  else z++;
  
  if(arr[i] % 2 == 0) e++;
  else o++;
 }
 
 printf("Positive: %d\nNegative: %d\nZero: %d\nOdd: %d\nEven: %d\n", p,neg,z,o,e);
 
}
