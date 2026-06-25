#include<stdio.h>
int main(){
    int x,y,i,temp=1;
    printf("enter values for X & Y\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++){
        temp*=x;
    }
    printf("%d",temp);
    return 0;
}