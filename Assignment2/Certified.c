#include<stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num==1){
        printf("Yes JAVA");
    }
    else if(num==2){
        printf("Yes .net");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}