#include<stdio.h>
int main(){
    char str[10];
    char ch;
    int count=0;
    printf("enter the string\n");
    scanf("%s",str);
    printf("Enter the character that you want to check\n");
    fflush(stdin);
    scanf("%c",&ch);
    for(int i=0;str[i]!=0;i++){
        if(str[i]==ch){
            count++;
        }
    }


    printf("Original String :%s\n",str);
    printf("Occurance of %c is %d\n",ch,count);
    return 0;
}