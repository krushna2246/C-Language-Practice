#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",ptr1);
    printf("%d\n",ptr2);
    printf("%d\n",&a);
    printf("%d\n",&ptr);
    printf("%d\n",&ptr1);
    printf("%d\n",&ptr2);
    // printf("%d\n",*a);

    printf("%d\n",*ptr);
    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
    printf("%d\n",**ptr1);
    printf("%d\n",**ptr1);
   
    return 0;
}