#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){//1
        for(j=i;j>=1;j--){
            printf(" %d",j);
        }
        printf("\n");
    }
}