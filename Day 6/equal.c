#include<stdio.h>

void main(){
 int n1, n2;
 
 printf("Enter size of array 1: ");
 scanf("%d", &n1);
 
 int arr1[n1];
 
 printf("Enter %d elements\n", n1);
 for(int i= 0; i < n1; i++){
  scanf("%d", &arr1[i]);
 }
 
 printf("Enter size of array 2: ");
 scanf("%d", &n2);
 
 int arr2[n2];
 
 printf("Enter %d elements\n", n2);
 for(int i= 0; i < n2; i++){
  scanf("%d", &arr2[i]);
 }
 
 int flag = 1;
 
 if(n1 == n2){
  for(int i = 0; i < n1; i++){
   if(arr1[i] != arr2[i]) {
   flag = 0; 
   break;
   }
  }
 }
 else flag = 0;
 
 if(flag) printf("Arrays are equal.\n");
 else printf("Arrays are not equal!\n"); 
}
