#include<stdio.h>

void main(){
int noOfQue, correctMarks, inCorrectMarks, noOfCorrect, noOfIncorrect;

printf("No. of Questions: ");
scanf("%d", &noOfQue);
printf("Mark for correct answer: ");
scanf("%d", &correctMarks);
printf("Mark for Incorrect answer: ");
scanf("%d", &inCorrectMarks);
printf("No. of Correct answer: ");
scanf("%d", &noOfCorrect);
printf("No. of Incorrect answer: ");
scanf("%d", &noOfIncorrect);

float obtained =  correctMarks * noOfCorrect + inCorrectMarks * noOfIncorrect;   
float total = noOfQue * correctMarks;
float resultPercentage = (obtained * 100) / total;

printf("Obtained Percentage: %0.2f\n", resultPercentage);
if(resultPercentage < 50)
printf("Result: Fail\n");
else
printf("Result: Pass\n");

}
