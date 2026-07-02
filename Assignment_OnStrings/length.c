#include<stdio.h>
int main(){
    int count=0,i=0;
    char str[100];
    printf("Enter the string\n");
    scanf("%s",str);
    // while(str[i]!="NULL"){
    //     count++;
    //     // printf("check\n");
    // }
    for(i=0;str[i]!=0;i++){
        printf("%c\n",str[i]);
        count++;
    }
    
    printf("length is :%d\n",count);

    return 0;
}