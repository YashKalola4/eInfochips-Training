#include<stdio.h>
#include<stdlib.h>

void main(){
 int *fp;
 fp = (int *)malloc(sizeof(int) * 3);
 *(fp + 0) = 10;
 *(fp + 1) = 20;
 *(fp + 2) = 30;

for(int i = 0; i < 3; i++){
 printf("%d ", *(fp + i));
}
printf("\n");
int *newfp;
newfp = (int *)realloc(fp, sizeof(int) * 2);
for(int i = 0; i < 2; i++){
 newfp[i] = fp[i];
}

fp=newfp;

for(int i = 0; i < 3; i++){
 printf("%d ", fp[i]);
}
free(fp);
printf("\n");
}
