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
 
 int e, index = -1;
 printf("Enter element to search: ");
 scanf("%d", &e);
 
 int i;
 for(int i=0; i < n; i++){
  if(arr[i] == e){
   index = i;
   break;
  }
 }
 if(index < 0) printf("element %d not found!\n", e);
 else printf("element %d found at index %d\n",e,index);
 
}
