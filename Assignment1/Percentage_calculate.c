#include<stdio.h>
int  main(){
    int marathi,hindi,math,english,social_Science,sum;
    float percentage;
    printf("enter Marks for each subject \n");
    scanf("%d %d %d %d %d",&marathi,&hindi,&math,&english,&social_Science);
    sum=marathi+hindi+math+english+social_Science;
    printf("total is %d\n",sum);
    percentage=sum*100/500;
    printf("percentage is %f",percentage);
    
return 0;


}