#include<stdio.h>

void main(){
 struct Cric{
  char name[20];
  int score;
  struct Cric *next;
 };
 
 struct Cric c[3] = { {"Dhoni", 100, c+1},{"Jadeja", 90, c+2},{"Gill", 35, c}}, *p = &c[0];
 
 for(int i = 0; i < 3; i++){
	 printf("%s\n", p->name);
	 printf("%d\n", p->score);
	 p=p->next;
 }
 
}
