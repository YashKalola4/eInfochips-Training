#include<stdio.h>
void main(){
float salary;
printf("Salary: ");
scanf("%f",&salary);

if(salary > 50000){
printf("Salary after 10 Percent tax: %0.2f\n", (salary - 0.1 * salary));
}
else{
printf("Salary after 5 Percent tax: %0.2f\n", (salary - 0.05 * salary));
}

}
