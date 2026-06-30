#include<stdio.h>
int main(){
    int arr[5],i,j;
    int arr2[5];
    printf("enter the elements\n");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=5,j=0;i>=1;i--,j++){
        arr2[i]=arr[j];
    }
    printf("Print all elements\n");
    for(i=0;i<=4;i++){
        printf(" %d",arr2[i]);
    }
    return 0;
}