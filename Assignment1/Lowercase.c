#include<stdio.h>
int main(){
    char Uppercase,lowercase,alphabet;
    printf("enter the value of alphabet\n");
    scanf("%c",&lowercase);
    Uppercase=lowercase-32;
    alphabet=Uppercase;
    printf("the value of alphabet is %c", alphabet);
    return 0;
}