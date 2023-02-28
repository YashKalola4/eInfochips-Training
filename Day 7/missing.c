#include<stdio.h>

void main(){
 int N;
 
 printf("Enter value of N: ");
 scanf("%d", &N);
 
 int arr[N];
 
 printf("Enter %d values: ", N - 1);
 
 for(int i = 0; i < N - 1; i++){
  scanf("%d", &arr[i]);
 }
 
 int natSum = (N*(N+1)) / 2;
 int sum = 0;
 
 for(int i = 0; i < N - 1; i++){
  sum += arr[i];
 }
 
 printf("Missing number is: %d\n", natSum - sum);
 
 
 
}
