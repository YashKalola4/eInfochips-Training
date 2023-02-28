#include<stdio.h>

void main(){
int rows = 4, cols = 4;

int arr[4][4]={ {0, 0, 1, 0}, 
		{0, 0, 1, 0}, 
		{0, 0, 0, 0}, 
		{0, 0, 1, 0}  };  
int isCeleb = 1;
int present = 0;
for(int i = 0; i < rows; i++){
 for(int j = 0; j < cols; j++){
  int jcurrent = j;
  if(arr[i][j] != 0) {
   isCeleb = 0;
  }
  else if(i != jcurrent && arr[i][jcurrent] == 0){
   isCeleb = 0;
  }
 }
 
 if(isCeleb){
  present = 1;
  printf("%d is celebrity\n", i);
 }
}
  if(!present) printf("Celebrity not present");
}
