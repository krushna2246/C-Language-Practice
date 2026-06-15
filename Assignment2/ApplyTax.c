#include<stdio.h>
int main(){
    // calculate gross salary when TA DA & HRA  of basic salary if gross sal is more than 250000 then deduct 10 % tax
    float basic_salary,TA,DA,HRA,gross_salary;
    printf("enter the basic salary");
    scanf("%f",&basic_salary);
    TA=0.1*basic_salary;
    DA=0.2*basic_salary;
    HRA=0.15*basic_salary;
    gross_salary=basic_salary+TA+DA+HRA;
    if(gross_salary>250000){
        gross_salary=gross_salary-(0.1*gross_salary);
    }
    printf("gross salary is %f",gross_salary);
    return 0;
}