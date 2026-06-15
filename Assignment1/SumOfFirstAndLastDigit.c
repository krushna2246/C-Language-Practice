#include<stdio.h>
int main(){
    int number,first,last;
    printf("enter a number\n");
    scanf("%d",&number);
    first=number/1000;

    last=number%10;
    printf("first  %d\n",first);
    printf("last  %d\n",last);
    printf("%d",first+last);

    return 0;
}