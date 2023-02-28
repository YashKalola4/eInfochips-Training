#include<stdio.h>

void main(){

 int source[5] = {1, 2, 3, 4, 5};
 int dest[5];
 
 for(int i = 0; i < 5; i++){
  dest[i] = source[i]; 
 }
 
 printf("Elements of Destination array, copied from source: \n");
 for(int i = 0; i < 5; i++){
  printf("%d ", dest[i]);
 }
 printf("\n");
}
