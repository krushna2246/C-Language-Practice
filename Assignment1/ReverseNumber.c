#include<stdio.h>
int main(){
    int number,reverse=0;
    printf("enter a number\n");
    scanf("%d",&number);
    reverse=reverse*10+number%10;
    number=number/10;

    printf("reverse  is %d\n", reverse);
    printf(" number is %d\n", number);

    reverse=reverse*10+number%10;
    number=number/10;

    printf("reverse  is %d\n", reverse);
    printf(" number is %d\n", number);

    reverse=reverse*10+number%10;
    number=number/10;

   
    printf("reverse  is %d\n", reverse);
    printf(" number is %d", number);

    return 0;

}