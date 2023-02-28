#include<stdio.h>

void main(){
 
 int N;
 
 printf("Enter value of N: ");
 scanf("%d", &N);
 
 int arr[N];
 
 for(int i = 0; i < N; i++){
  scanf("%d", &arr[i]);
 }
printf("Leaders: ");
for(int i = 0; i < N; i++){
 int leadCheck = 1;
 for(int j = i + 1; j < N; j++){
  if(arr[i] < arr[j]) {
  leadCheck = 0;
  break;
  }
 }
 if(leadCheck) printf("%d ", arr[i]);
}

printf("\n");
}
