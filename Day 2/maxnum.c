#include<stdio.h>
void main(){
int n1, n2, n3, n4;

printf("Number 1: ");
scanf("%d",&n1);

printf("Number 2: ");
scanf("%d",&n2);

printf("Number 3: ");
scanf("%d",&n3);

printf("Number 4: ");
scanf("%d",&n4);

if(n1 > n2 && n1 > n3 && n1 > n4)
printf("%d is Max\n", n1);
else if(n2 > n1 && n2 > n3 && n2 > n4)
printf("%d is Max\n", n2);
else if(n3 > n1 && n3 > n2 && n3 > n4)
printf("%d is Max\n", n3);
else
printf("%d is Max\n", n4);

}
