#include<stdio.h>
void main(){
int menuChoice;
printf("Select a Menu: 1.Gujarati 2.Punjabi 3.South Indian");
scanf("%d", &menuChoice);

switch(menuChoice)
{
	case 1: printf("<--- Gujarati Menu --->");
		int item, quan;
		float bill = 0;
		printf("1. Khichdi- Rs.50\n 2. Kadhi- Rs.30\n 3. Gulabjamun - Rs.20");
		scanf("%d", &item);
		printf("Quantity: ");
		scanf("%d", &quan);
		
		switch(item){
		 case 1: printf("You selected Khichdi");
		 	 bill = quan * 50;
		 	 if(quan >= 5) bill = bill - bill * 0.10; //10% of discount if quantity >= 5
		 	 printf("Your bill is Rs.%0.2f\n", bill);
		 	 break;
		 	 
		 case 2: printf("You selected Kadhi");
		 	 bill = quan * 30;
		 	 if(bill >= 200) bill = bill - bill * 0.05; // 5% of discount
		 	 printf("Your bill is Rs.%0.2f\n", bill);
		 	 break;
		 	 
		 case 3: printf("You selected Gulabjamun");
		 	 if(quan >= 3) bill = bill + bill * 0.12; //12% GST on Gulabjamun!
		 	 printf("Your bill is Rs.%0.2f\n", (quan * 20));
		 	 break;
		}
		
		break;
	case 2: printf("<--- Punjabi Menu --->");
		printf("1. Paneer\n 2. Naan\n 3. Dal Makhni");
		break;
	case 3: printf("<--- South Indian Menu --->");
		printf("1. Dosa\n 2. Idli\n 3. Meduwada");
		break;
	default: printf("Invalid!");
}
}
