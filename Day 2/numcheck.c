#include<stdio.h>
void main(){
int num;
printf("Number: ");
scanf("%d",&num);

num==0?printf("Zero\n"):(num>0?printf("Positive\n"):printf("Negative\n"));

}
