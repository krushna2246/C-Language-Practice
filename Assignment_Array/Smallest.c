#include <stdio.h>
int smallest(int *);
int main()
{
    int arr[5], i;
    printf("Enter the elements\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("smallest element in array : %d",smallest(arr));
    return 0;
}
int smallest(int * ptr){
    int small=ptr[0],i;
    for(i=0;i<=4;i++){
        if(small>ptr[i]){
            small=ptr[i];
        }
    }
    return small;
}