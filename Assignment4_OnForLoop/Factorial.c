#include<stdio.h>
int main(){
    int x,i,fact;
    printf("enter value of x");
    scanf("%d",&x);
    fact=1;
    for(i=1;i<=x;i++){
        fact*=i;
        
    }
    printf("%d",fact);
    return 0;
}