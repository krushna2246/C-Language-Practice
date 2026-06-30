#include<stdio.h>
int largest(int *);
int main(){
    int i,j;
    int arr[5];
    
    printf("Enter the elements \n");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    printf(" largest Element is : %d ",largest(arr));
    
    
}
int  largest(int *ptr){
    int large=0,i;

    for(i=0;i<=4;i++){
        if(large<ptr[i]){
            large=ptr[i];
        }

    }
    return large;
    
}