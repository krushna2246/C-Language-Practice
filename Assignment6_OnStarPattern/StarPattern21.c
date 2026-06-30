#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 65; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}