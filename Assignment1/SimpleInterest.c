#include<stdio.h>
int main()
{
    int P,R,T,SI;
    printf("Enter Principal amount: ");
    scanf("%d", &P);    
    printf("Enter Rate of interest: ");
    scanf("%d", &R);
    printf("Enter Time period: ");
    scanf("%d", &T);
    SI = (P * R * T) / 100;
    printf("Simple Interest is: %d", SI);
    
    return 0;
}