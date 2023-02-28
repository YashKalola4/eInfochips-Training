#include<stdio.h>

void main() { 
 //E
 /* for(int i=1; i<=5; i++){
 	for(int j=1; j<=5; j++){
 	 if(i == 1 || i == 3 || i == 5){
 	   printf("* ");
 	 }
 	 else{
 	  if(i == j) printf("* ");
 	 }
 	}
 	printf("\n");
 }
 */
 
 // Z
 /* for(int i = 1; i <= 5; i++){
  for(int j = 1; j <= 5; j++){
   if(i == 1 || i == 5) printf("*");
   else{
   	if((i+j) == 6) printf("*");
   	else printf(" ");
   }
  	
  }
  printf("\n");
 }
 */
 
 //
 for(int i = 1; i <= 5; i++){
	for(int j = 1; j <= i; j++){
		printf("* ");
	}
	printf("\n");
}
}
