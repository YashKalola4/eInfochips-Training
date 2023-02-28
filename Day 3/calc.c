#include<stdio.h>
void main(){
int n1, n2, choice;
float ans;

printf("Number 1: ");
scanf("%d", &n1);
printf("Number 2: ");
scanf("%d", &n2);

printf("Enter choice => 1.Addition 2.Substraction 3.Multiplication 4.Divison: ");
scanf("%d", &choice);

switch(choice)
{
	case 1: ans = n1+n2;
		break;
	case 2: ans = n1-n2;
		break;
	case 3: ans = n1*n2;
		break;
	case 4: ans = n1/n2;
		break;
	default: printf("Invalid choice");
}
printf("Result is %0.2f", ans);
}
