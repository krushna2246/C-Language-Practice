#include <stdio.h>
int main()
{
    float s1, s2, s3, sum, percentage;
    printf("enter marks for 3 subjects\n");
    scanf("%f%f%f", &s1, &s2, &s3);
    sum = s1 + s2 + s3;
    percentage = (sum * 100) / 300;
    if (s1 >= 35)
    {
        if (s2 >= 35)
        {
            if (s3 >= 35)
            {
                printf("Student is passed with %.2f", percentage);
            }
            else
            {
                printf("student is failed in s3");
            }
        }
        else if (s3 >= 35)
        {
            printf("student is failed in s2");
        }
        else
        {
            printf("student is failed in s2 & s3");
        }
    }
    else if (s2 >= 35)
    {
        if (s3 >= 35)
        {
            printf("student is failed in s1");
        }
        else
        {
            printf("student is failed in s1 & s3");
        }
    }
    else if(s3>=35)
    {
        printf("student is failed in s1 & s2");
    }
    else{
        printf("student is failed in 3 subjects");
    }

    return 0;
}