#include<stdio.h>
void main(){
int type;

printf("1.Domestic, 2.Commerical: ");
scanf("%d",&type);

/*if(type != 1 && type != 2){
 printf("Invalid type");
}
else{*/
 int phase, unit;
 float bill, service;
 printf("Enter phase: ");
 scanf("%d",&phase);
 printf("Enter units: ");
 scanf("%d",&unit);
 
//For Domestic
 if(type == 1){
  if(unit * 0.06 >= 20){
   service = unit * 0.06;
  }
  else{
   if(phase == 1)
    service = 20;
   else if(phase == 3)
    service = 50;
  }
  if(unit <= 50) 
  bill = unit * (1.45) + 10 + service; 
  
  else if(unit >= 51 && unit <= 100){
   bill = (50 * 1.45) + (unit - 50) * 2.85 + 10 + service;
  } 
  else if(unit >= 101 && unit <= 200){
   bill = (50 * 1.45) + (50 * 2.85) + (unit - 100) * 3.95 + 10 + service;
  }  //72.5+142.5+3.95+10+20
  else{ 
   bill = (50 * 1.45) + (50 * 2.85) + (100 * 3.95) + (unit - 200) * 4.50 + 10 + service;
  } 
 }
 else{ //For Commerical
   if(unit * 0.06 >= 20){
   service = unit * 0.06;
  }
  else{
   if(phase == 1)
    service = 50;
   else if(phase == 3)
    service = 100;
  }
  if(unit <= 100) 
  bill = unit * (3.45) + 20 + service;
  
  else 
  bill = (100 * 3.45) + (unit - 100) * 7.00 + 20 + service;
 }
 
 printf("Total Electricity Bill: %0.2f Rs.\n", bill);
}
