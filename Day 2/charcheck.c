#include<stdio.h>
void main(){
char a;

printf("Enter a character: ");
scanf("%c", &a);

if(a >= 65 && a <= 90)
printf("%c is in Uppercase\n", a);
else if(a >= 97 && a <= 122)
printf("%c is in Lowercase\n", a);
else if(a >= 48 && a <= 57)
printf("%c is digit\n", a);
else
printf("%c is special character\n", a);
}
