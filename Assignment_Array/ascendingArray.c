#include <stdio.h>
void arrange(int *);
void swap(int, int, int *);
int main()
{
    int arr[4], i;
    printf("Enter the elements\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    arrange(arr);
    printf("Ascending Order\n");

    display(arr);
    return 0;
}
void arrange(int *ptr)
{
    int i, j;
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (ptr[i] > ptr[j])
            {
                swap(ptr[i], ptr[j], ptr);
            }
        }
    }
}
void swap(int a, int b, int *ptr)
{
    int temp;
    temp = ptr[a];
    ptr[a] = ptr[b];
    ptr[b] = temp;
}
void display(int *ptr)
{
    int i;
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", ptr[i]);
    }
}
