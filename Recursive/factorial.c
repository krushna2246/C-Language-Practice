#include <stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("enter the the number\n");
    scanf("%d", &n);
    f = fact(n);
    printf("%d", f);
    return 0;
}
    int fact(int n)
    {
        int f;
        if (n > 0)
        {
            
            return n * fact(n - 1);;
        }
        else
        {
            return 1;
        }
    }