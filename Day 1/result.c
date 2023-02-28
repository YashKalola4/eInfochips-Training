#include<stdio.h>
void main(){

int s1, s2, s3, s4, s5;

printf("Subject 1 Marks: ");
scanf("%d",&s1);
printf("Subject 2 Marks: ");
scanf("%d",&s2);
printf("Subject 3 Marks: ");
scanf("%d",&s3);
printf("Subject 4 Marks: ");
scanf("%d",&s4);
printf("Subject 5 Marks: ");
scanf("%d",&s5);
int aggr = s1+s2+s3+s4+s5;
float perc = (aggr*100)/500;
printf("Aggregate Marks = %d and Percentage = %0.2f\n", aggr, perc);


}
