#include<stdio.h>
int main(){
    int num;
    printf("enter a num");
    scanf("%d",&num); //4
    if(num%2==0)
        printf("Number is Even");
    else
        printf("Number is Odd");
    
    return 0;
}