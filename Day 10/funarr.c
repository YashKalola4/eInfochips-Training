#include<stdio.h>
/*
void main(){
 void scan(int arr[], int n){
  for(int i = 0; i < n; i++){
   scanf("%d", &arr[i]);
  }
 }
 
 void print(int arr[], int n){
  for(int i = 0; i < n; i++){
   printf("%d ", arr[i]);
  }
 }
 
 
 int a[5];
 printf("Enter elements: \n");
 scan(a,5);
 printf("Entered elements: \n");
 print(a,5);
 */
 
 
 int x = 10;
 void main(){
  void change(){
   x += 30;
  }
  printf("%d", x);
  change();
  printf("%d", x);
  change();
  printf("%d", x);
 }
