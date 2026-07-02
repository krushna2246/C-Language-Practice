#include <stdio.h>
int add(int);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("addition :%d\n", add(n));
    return 0;
}
int add(int n)
{
    if (n > 0)
    {
        return add(n - 1) + n;
    }
    return 0;
}