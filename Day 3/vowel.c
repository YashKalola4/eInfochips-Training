#include<stdio.h>
void main(){
char c;
printf("Character: ");
scanf("%c", &c);

switch(c)
{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U': printf("Vowel");
		  break;
	
	default: printf("Not a vowel");
}
}
