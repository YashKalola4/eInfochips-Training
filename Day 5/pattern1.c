#include<stdio.h>

void main(){

int n;

/*printf("N: ");
scanf("%d", &n);

for(int i = 0; i < n; i++){
	for(int j = 0; j <= i; j++){
		printf("*");
	}
	printf("\n");
}
*/

// Print T
for(int i = 1; i <= 5; i++){
	for(int j = 1; j < 4; j++){
		if(i == 1) printf("* ");
		else printf(" ");
		if(j == 3) printf("* ");
		
	}
	printf("\n");
}

}
