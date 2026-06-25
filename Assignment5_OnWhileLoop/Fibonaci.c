#include<stdio.h>
int main(){
    int n,i=1;
    int a=0,b=1,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while(i<=n){
         printf("%d\n",a);
       c=a+b;
       a=c;
       b=a;
       i++;
    }
   
    return 0;
}
