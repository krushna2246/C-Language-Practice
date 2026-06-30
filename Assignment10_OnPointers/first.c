#include<stdio.h>
int main(){
    int a,b;
    int *p=&b;
    printf("Enter the values for a & b\n");
    scanf("%d %d",&a,&b);
    printf("%u\n",p);
    printf("%d%d\n",a+b);
    return 0;
}