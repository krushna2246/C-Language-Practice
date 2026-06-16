#include<stdio.h>
int main()
// i also want to add 10 % discount if total price is more than 1000
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