#include<stdio.h>

void main(){
 void passcheck(char *s){
  int valid = 0;
  int uCheck = 0, lCheck = 0, nCheck = 0, spCheck = 0;
  int len = 0;
  char *str = s;
  while(*s != '\0'){
   len++;
   printf("%c", *(s));
   s++;
  }
  if(len >= 8){
   for(int i = 0; i < len; i++){
    if(*(str+i) >= 'A' && *(str+i) <= 'Z') uCheck = 1;
    else if(*(str+i) >= 'a' && *(str+i) <= 'z') lCheck = 1;
    else if(*(str+i) >= '0' && *(str+i) <= '9') nCheck = 1;
    else spCheck = 1;
   }
    if(uCheck && lCheck && nCheck && spCheck) valid = 1;
  }
  printf("\n");
  if(valid) printf("Strong Password\n");
  else printf("Password is not strong enough\n");
 }
 char *pass = "Abcd@12";
 passcheck(pass);
}
