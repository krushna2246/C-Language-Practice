#include<stdio.h>
int main(){
    int i,j,n,sum=0,fact=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        fact*=j;
    }
    printf("%d\n",fact);
    sum+=fact;
    fact=1;
    }
    printf("sum is : %d",sum);
    return 0;
}