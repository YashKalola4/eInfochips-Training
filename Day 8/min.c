 //left
#include<stdio.h>

void main(){
 int N;
 
 printf("Enter value of N: ");
 scanf("%d", &N);
 
 int arr[N];
 
 printf("Enter %d values: ", N);
 
 for(int i = 0; i < N; i++){
  scanf("%d", &arr[i]);
 }
 
 int ansmin[N], anssum[N];
 ansmin[0] = 0;
 anssum[0] = 0;
 
 for(int i = 1; i < N; i++){
  int minCount = 0;
  int leftSum = 0;
  for(int j = i-1; j >= 0; j--){
   if(arr[j] < arr[i]) minCount++;
   
   leftSum += arr[j];
  }
   ansmin[i] = minCount;
   anssum[i] = leftSum;
 }
 printf("Minimum numbers on left: \n");
 for(int i = 0; i < N; i++){
  printf("%d ", ansmin[i]);
 }
  printf("\n");
 printf("Sum of numbers on left: \n");
 for(int i = 0; i < N; i++){
  printf("%d ", anssum[i]);
 }
 printf("\n");
}
