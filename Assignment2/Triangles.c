#include<stdio.h>
int main(){
    float T1,T2,T3,sum;
    
    printf("Enter Values for Three Triangles");
    scanf("%f%f%f",&T1,&T2,&T3);
    sum=T1+T2+T3;    
    if((T1>0 && T2>0 && T3>0)||(sum>=180)){
        printf("valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}