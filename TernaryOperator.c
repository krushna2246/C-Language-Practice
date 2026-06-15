#include<stdio.h>
int main(){
    int A,B,C;
    printf("enter the values for A , B , C\n");
    scanf("%d%d%d",&A,&B,&C);
    printf("A=%d B=%d C=%d\n",A,B,C);

    ((A>B)&&(A>C)) ? printf("A is greater than B and C"):((B>A)&&(B>C))?printf("B is greater than A and C"):printf("C is greater than A and B  ");
    return 0;

}