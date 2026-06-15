#include<stdio.h>
int main(){
    char Uppercase,lowercase;
    printf("enter the value of alphabet\n");
    scanf("%c",&Uppercase);
    lowercase=Uppercase+32;
    printf("the value of alphabet is %c", lowercase);
    return 0;
}