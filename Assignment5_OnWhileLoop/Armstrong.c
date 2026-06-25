#include<stdio.h>
int main(){
    int number,rev=0,original=0,sum=0;
    printf("enter the number\n");
    scanf("%d",&number);
    original=number;
    while(number>0){
        rev=number%10;
        for(int i=0;i<3;i++){
            rev=rev*rev;
        }
        number=number/10;
        sum+=rev;   
    }
    if(original==sum){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
    return 0;
}