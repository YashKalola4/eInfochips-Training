#include<stdio.h>

void main(){
 FILE *fp1, *fp2;
 fp1 = fopen("file1.txt", "w");
 fp2 = fopen("file2.txt", "r");
 char ch;
 do{
  ch = getc(fp2);
  putc(ch, fp1);
 if(ch == EOF) break;
  printf("%c", ch);
 }
 while(1);
 printf("File 1 written successfully!\n");
 
 fclose(fp1);
 fclose(fp2);
}
