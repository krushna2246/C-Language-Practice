#include <stdio.h>
int main()
{
    int count = 0, i;
    char str[10];
    char str1[10];

    printf("Enter the string\n");
    scanf("%s", str);
    for (i = 0; str[i] != 0; i++)
    {
        count++;
    }
    printf("First String is : %s\n", str);
    for (i = 0; i <= count; i++)
    {
        str1[i] = str[i];
    }
    printf("Second String is : %s", str1);
    return 0;
}