//add elements in list using realloc
#include<stdio.h>
#include<stdlib.h>
void main(){
 
 int *fp;
 int n1;
 
 printf("Enter size of list: ");
 scanf("%d", &n1);
 
 fp = (int *) malloc(n1 * sizeof(int));
 
 printf("Enter %d numbers: ", n1);
 for(int i = 0; i < n1; i++){
  scanf("%d", *(fp+i));
 }
 printf("Entered numbers: \n");
 for(int i = 0; i < n1; i++){
  printf("%d ", *(fp+i));
 }
 
 printf("\n");
 
 int n2;
 printf("Enter new size of list: ");
 scanf("%d", &n2);
 
 fp = (int *) realloc(fp, sizeof(int) * n2);
 
 if(n2 > n1){
  printf("Enter %d new numbers: ", n2-n1);
  for(int i = 0; i < n2; i++){
   
  }
 }
 
}
