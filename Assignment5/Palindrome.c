#include<stdio.h>
int main(){
    int num,rev=0,original;
    printf("enter any number\n");
    scanf("%d",&num);
    original=num;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    if(rev==original){
        printf("number is palindrome\n");
    }
    else{
        printf("number is not palindrome\n");
    }
    printf("original number :%d\n",original);
    printf(" number : %d\n",num);
    
    printf("reverse: %d\n",rev);
    return 0;
}