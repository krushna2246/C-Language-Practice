#include<stdio.h>
int main(){
    int basic_salary,DA,HRA,gross_salary,TA;
    printf("enter basic salary \n");
    scanf("%d",&basic_salary);
    DA=basic_salary*20/100;
    HRA=basic_salary*15/100;
    TA=basic_salary*10/100;
    gross_salary=basic_salary+DA+HRA+TA;
    printf("gross salary is %d",gross_salary);

    return 0;
}