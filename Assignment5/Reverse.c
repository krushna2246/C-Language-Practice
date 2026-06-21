#include <stdio.h>
int main()
{
    int number, i,reverse=0;
    printf("enter the number\n");
    scanf("%d", &number);
    while (number>0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
     printf("%d\n",reverse);
    return 0;
}