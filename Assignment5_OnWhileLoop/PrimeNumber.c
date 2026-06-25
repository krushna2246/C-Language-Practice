#include <stdio.h>
int main()
{
    int number, count = 0, i = 1;
    printf("Enter any number\n");
    scanf("%d", &number);

    while (i <= number)
    {
        if (number % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("%d : is prime", number);
    }
    else
    {
        printf("%d : is not prime", number);
    }

    return 0;
}
