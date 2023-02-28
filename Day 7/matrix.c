#include<stdio.h>

void main(){
 int arr[3][3];
 
 for(int i = 0; i < 3; i++){
  printf("Enter data for row %d: \n", i);
  for(int j = 0; j < 3; j++){
   scanf("%d", &arr[i][j]);
  }
 }
 
 printf("Entered Data: \n");
 for(int i = 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
   printf("%d ", arr[i][j]);
  }
  printf("\n");
 }
}
