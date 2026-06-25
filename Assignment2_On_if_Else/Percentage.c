#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,sum,percentage;

    printf("enter the marks for 5 subjects");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    percentage=(sum*100)/500;
    if(percentage<60){
        printf("Hard Luck Fuck Off\n");
    }
    printf("%f",percentage);
    return 0;

}
