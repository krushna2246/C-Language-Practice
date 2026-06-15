#include<stdio.h>
int main(){
    
    int selling_price,profit,cost_price;
    printf("enter value of selling price\n");
    scanf("%d",&selling_price);
    printf("enter value of profit\n");
    scanf("%d",&profit);
    cost_price=(selling_price-profit)/15;
    printf("cost price of 1 item is %d", cost_price);
    return 0;
}