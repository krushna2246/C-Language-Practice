#include<stdio.h>
int main(){

    float basic_salary,TA,DA,HRA,gross_salary;
    printf("enter the basic salary");
    scanf("%f",&basic_salary);
    TA=0.1*basic_salary;
    DA=0.2*basic_salary;
    HRA=0.15*basic_salary;
    gross_salary=basic_salary+TA+DA+HRA;
    if(gross_salary>400000){
        gross_salary=gross_salary-(0.1*gross_salary);
    }
    printf("gross salary is %f",gross_salary);
    return 0;

}