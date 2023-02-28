#include<stdio.h>
void main(){
int TotalSellingPrice, totalProfit;

printf("Selling Price: ");
scanf("%d",&TotalSellingPrice);

printf("Total Profit: ");
scanf("%d",&totalProfit);

int costOfOne = (totalProfit - TotalSellingPrice) / 15;

printf("Cost of one item is %d\n", costOfOne);

}
