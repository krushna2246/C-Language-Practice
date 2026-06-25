#include<stdio.h>
int main(){
    float t1,t2,t3;
    printf("Enter the 3 Angles\n");
    scanf("%f%f%f",&t1,&t2,&t3);

    
    if((t1==t2)&&(t2==t3)){
        printf("Triangle is equilateral ");
    }


    return 0;
}