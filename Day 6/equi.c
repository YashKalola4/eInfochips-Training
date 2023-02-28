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
 
 int i;
 for(i = 0; i < n; i++){
  int lsum = 0, rsum = 0;
   
   //rsum
   for(int j = i; j < n; j++)    
   {
    rsum += arr[j];
   }
   
   //lsum
   for(int j = i; j >= 0; j--)    
   {
    lsum += arr[j];
   }
   
   if(lsum == rsum){
    equi = arr[i];
    break;
   }
 }
 if(i >= n) printf("Equilibrium is not present in array!\n");
 else printf("Equilibrium is %d\n", equi);
}
