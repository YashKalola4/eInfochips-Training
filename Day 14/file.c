#include<stdio.h>

void main(){
 FILE *fp;
 
 fp = fopen("file.txt", "r");
 char ch;
 do{
  ch = getc(fp);
  printf("%c", ch);
 }
 while(ch != EOF);
 
 fseek(fp, 1, SEEK_CUR);
 printf("%c", getc(fp));
 
 fclose(fp);
}
