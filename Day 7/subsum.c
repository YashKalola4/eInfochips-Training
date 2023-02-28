#include<stdio.h>

void main(){
 
 int N = 5, S = 12, start, end;
 int arr[5] = {10, 2, 3, 7, 5};
 
int sum;
 
 for(int i = 0; i < N; i++){
  sum = arr[i];
  
  for(int j = i + 1; j < N; j++){
   sum = sum + arr[j];
   if(sum == S){
    start = i;
    end = j;
    printf("(O based indexing) Start: %d End: %d\n", start, end);
    printf("Elements are: ");
    for(int k = start; k <= end; k++) printf("%d ", arr[k]); 
    break;
   }
   printf("\n");
  }

 }
 
}
