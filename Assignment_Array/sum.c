#include<stdio.h>
int main(){
    int arr[5],i,sum=0;
    printf("enter the elements for array\n");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);


    return 0;
}