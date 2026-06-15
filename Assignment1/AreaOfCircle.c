#include<stdio.h>
int main(){
    float pi=3.14,r,Circle,Circumference;
    printf("enter the value of Radius\n");
    scanf("%f",&r);
    Circle =pi*r*r;
    Circumference=2*pi*r;
    printf("Area of Circle: %f\n", Circle);
    printf("Circumference of Circle: %f", Circumference);

    return 0;
}
