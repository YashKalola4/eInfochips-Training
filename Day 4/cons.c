#include<stdio.h>

void main(){
int n, i, count;

printf("Enter integer: ");
scanf("%d", &n);

for(i=n, count = 0; count<=10; count++, i++){
 if(i%2 == 0) printf("%d is even\n", i);
}
count = 0, i = n;
for(i=n, count = 0; count<=10; count++, i++){
 if(i%2 != 0) printf("%d is odd\n", i);
}
}
