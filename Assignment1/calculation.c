#include<stdio.h>
int main()
{
    int num1, num2, sum, sub, mul;
    float div;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", sub);
    printf("Product = %d\n", mul);
    printf("Quotient = %.2f\n", div);

    return 0;
}
