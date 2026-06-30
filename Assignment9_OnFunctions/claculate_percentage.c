#include <stdio.h>
float calc_Percentage(int, int, int);
int main()
{
    int s1, s2, s3;
    printf("enter the three subject marks\n");
    scanf("%d%d%d", &s1, &s2, &s3);
    printf("Percentage of 3 Subjects : %.2f",calc_Percentage(s1, s2, s3));
    return 0;
}
float calc_Percentage(int s1,int s2,int s3){
    float result;
    result=((s1+s2+s3)/300.0)*100;
    return result;
}