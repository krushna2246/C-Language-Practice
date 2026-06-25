#include<stdio.h>
int main(){
    int a,b,result;
    int ch;
    printf("enter value of a & b \n");
    scanf("%d%d",&a,&b);
    printf("enter case\n");
    fflush(stdin);
    scanf("%d",&ch);

    switch (ch)
    {
    case  'A':
    result=a+b;
        break;
    case  'B':
    result=a+b;
        break;
    case  'C':
    result=a+b;
        break;
    default:
        break;
    }
    printf("result is : %d",result);
    return 0;
}