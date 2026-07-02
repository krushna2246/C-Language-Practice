#include<stdio.h>
int main(){
    char str[10];
    int count=0,i;
    printf("Enter the string\n");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++){
        count++;
    }
    for(i=0;i<=count;i++){
        str[i]+=32;
    }
    puts(str);

    return 0;
}