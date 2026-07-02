#include<stdio.h>
int main(){
    int i,count;
    char str[100];
    printf("Enter the string\n");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++){
        count++;
    }
    for(i=0;i<count;i++){
        str[i]-=32;
    }
    printf("%s",str);
    return 0;
}