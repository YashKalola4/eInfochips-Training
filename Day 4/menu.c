#include<stdio.h>

void main(){
 int choice = 1, qty = 0;
 float bill = 0;
 while(choice != -1){
  printf("101-Burger-150 Rs\n102-Pizza-250 Rs\n103-Sandwich-100Rs\nEnter -1 for checkout\n");
  scanf("%d", &choice);
  if(choice == -1){
   break;
  }
  
  switch(choice){
  case 101: printf("Quantity: ");
  	    scanf("%d", &qty);
            bill += qty * 150;
  	    break;
  	    
  case 102: printf("Quantity: ");
  	    scanf("%d", &qty);
  	    bill += qty * 250;
  	    break;
  	    
  case 103: printf("Quantity: ");
  	    scanf("%d", &qty);
  	    bill += qty * 100;
  	    break;
  	    
  default: printf("Please choose item from menu only\n");
  }
  
 }
 printf("Your total bill is %0.2f(5 percentage GST included)\n", bill * 1.05);
}
