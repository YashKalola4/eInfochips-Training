#include<stdio.h>

void main(){
 void scan(int *p){
  for(int i = 0; i < 5; i++){
   scanf("%d", (p+i));
  }
 }
 void print(int *p){
  for(int i = 0; i < 5; i++){
   printf("%d ", *(p+i));
  }
  printf("\n");
  printf("P: %d\n", **(&p)); //p will store the address of base(eg. &arr[0])
 }
 int arr[5];
 printf("Enter elements: \n");
 scan(arr);
 printf("Entered elements: \n");
 print(arr);
 printf("Arr: %d\n", *(arr+1));
 int a = 25;
 int *q = &a;
 
 printf("A: %d\n", *(&a));
}
