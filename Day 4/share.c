#include<stdio.h>

void main(){
 float profit = 0;
 float sellPrice, buyPrice;
 float choice = 1, qty;
 
 while(choice != -1){
  
  printf("Buying Price: ");
  scanf("%f", &buyPrice);
  printf("Quantity: ");
  scanf("%f", &qty);
  printf("Selling Price: ");
  scanf("%f", &sellPrice);
  
  
  
  profit += (sellPrice * qty) - (buyPrice * qty);
 
  if(profit >= 0) printf("Total Profit: %0.2f\n", profit);
  else printf("Total Loss: %0.2f\n", profit);
 
  printf("Press -1 to quit, 1 to continue: ");
  scanf("%f", &choice);
 }
 
}
