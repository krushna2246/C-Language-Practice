#include<stdio.h>
int main(){
    int i,j,fact=1,sum=0,n;
    printf("Enter The value n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            fact*=j;
            
        }
        
        fact/=i;
        sum+=fact;
        printf("fact is : %d\n",fact);
        fact=1;
        
    }
     printf("the final sum is : %d",sum);
    return 0;
}