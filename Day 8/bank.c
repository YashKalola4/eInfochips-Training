#include<stdio.h>

void main(){
 int acc[5] = {1001, 1002, 1003, 1004, 1005};
 int pass[5] = {123, 124, 125, 126, 127};
 int balance[5] = {0, 0, 0, 0, 0};
 
 int choice = 1;
 int accno, pwd;
 
 printf("Enter account number: ");
 scanf("%d", &accno);
 
 printf("Enter password: ");
 scanf("%d", &pwd);
 
 int valid = 0;
 for(int i = 0; i < 5; i++){
  if(accno == acc[i]){
   int iPass = i;
   if(pass[iPass] == pwd) valid = 1;
   
   break;
  }
 }
 if(valid) {
 float balance = 0;
 while(choice != -1){
  printf("1. Deposit\n2. Withdraw\n-1. Exit: \n");
  scanf("%d", &choice);
  
  
  switch(choice){
  case 1: 
  	  printf("Enter amount to deposit: ");
  	  int depo;
          scanf("%d", &depo);
          balance = balance + depo;
          printf("Avaliable Balance: %0.2f\n", balance);
          break;
  
  case 2: printf("Avaliable Balance: %0.2f\n", balance);
  	  int amt;
  	  
  	  printf("Enter amount to withdraw: ");
          scanf("%d", &amt);
          
          if(amt > balance) printf("Insufficient Balance!\n");
          else{
          balance = balance - amt;
          printf("Avaliable Balance: %0.2f\n", balance);
          }
          break;
    
  case -1: printf("Thanks, visit us again!\n");
    	   break;
   
   default: printf("Invalid Operation Choice!\n");
  }
 }
}
else {
 printf("Wrong Credentials!!!\n");
}
}
