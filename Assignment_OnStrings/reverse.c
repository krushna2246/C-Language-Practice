#include <stdio.h>
int main()
{
    int count = 0, i;
    char str[10];
    int rev = 0;
    printf("Enter the string\n");
    scanf("%s", str);
    for (i = 0; str[i] != 0; i++)
    {
        count++;
    }
    rev = count / 2;
    int first = 0;
    int last = count - 1;
    char temp;

    for (i = 0; rev > 0; rev--)
    {
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;
    }
    puts(str);

    return 0;
}