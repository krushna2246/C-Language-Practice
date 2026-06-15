#include<stdio.h>
int main(){
    int num,rev=0,original;
    printf("enter the number");
    scanf("%d",&num);
    original=num;
    while(num>0){
   
    rev=rev*10+num%10;
    num/=10;
    }

    if(original==rev){
        printf("number is palindrome \n");
    }
    else{
         printf("number is not palindrome \n");
    }
    return 0;

}
