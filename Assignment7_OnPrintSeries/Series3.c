#include <stdio.h>
int main()
{
    int i, j, x, n, fact = 1, sum = 1;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("enter the value of x\n");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fact *= j;
            printf("fact : %d * %d\n", fact,j);
        }
        fact /= x;
        sum += fact;
        fact = 1;
    }
    printf("sum :%d\n", sum);

    return 0;
}