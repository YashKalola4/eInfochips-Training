#include<stdio.h>

void main(){
 FILE *fp1;
 FILE *fp2;
 
 fp1 = fopen("file1.txt", "r");
 fp2 = fopen("file2.txt", "r");
 char ch;
 do{
  ch = getc(fp);
  printf("%c", ch);
 }
 while(ch != EOF);
 
 
 fclose(fp);
}
