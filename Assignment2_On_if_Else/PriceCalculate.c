#include<stdio.h>
int main()

{
    float Quantity,Item_Price,Total_Price;
    printf("enter the Quantity");
    scanf("%f",&Quantity);
    printf("enter the Item Price");
    scanf("%f",&Item_Price);
    Total_Price = Quantity * Item_Price;
    if(Total_Price > 1000)
    {
        Total_Price = Total_Price - (Total_Price * 0.1);
    }
    
    printf("Total Price is %f",Total_Price);

    return 0;
}