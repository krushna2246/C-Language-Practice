#include<stdio.h>
int add(int,int);
int main(){
    int a,b;
    printf("Enter the values for a & b\n");
    scanf("%d%d",&a,&b);
    printf("Addition : %d\n",add(a,b));
    printf("Subtraction : %d\n",sub(a,b));
    printf("Multiplication : %d\n",mul(a,b));
    printf("division : %d\n",div(a,b));
    return 0;
}
int add(int x,int y){
    int sum;
    sum=x+y;
    return sum;
}
int sub(int x,int y){
    int sub;
    sub=x-y;
    return sub;
}
int mul(int x,int y){
    int  mul;
    mul=x*y;
    return mul;
}
int div(int x,int y){
    int div;
    div=x/y;
    return div;
}