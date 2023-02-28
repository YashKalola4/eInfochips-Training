#include<stdio.h>

void main(){
int rows = 4, cols = 4;

int arr[4][4]={ {0, 1, 0, 0}, 
		{0, 0, 0, 0}, 
		{0, 1, 0, 0}, 
		{0, 1, 0, 0}  };  
int whoIsCeleb = -1;

for(int i = 0; i < 4; i++){
 
 int rowSum = 0;
 
 for(int j = 0; j < 4; j++)
  rowSum += arr[i][j];
 
 if(rowSum == 0){
  int j = i;
  int colSum = 0;
  
  for(int k = 0; k < 4; k++)
    colSum += arr[k][j];
   
  if(colSum == 3)
    whoIsCeleb = i;
 }
}
if(whoIsCeleb < 0) printf("Celebrity not present.\n");
else printf("%d is Celebrity.\n", whoIsCeleb);
}
