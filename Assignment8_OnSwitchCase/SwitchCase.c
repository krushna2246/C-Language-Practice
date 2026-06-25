#include <stdio.h>
int main()
{
    int ch,Continue;
    float pi = 3.14, price, ROI, Time, r, simple_interest, AreaOfCircle, areaOfCircumferance, celsius, fahrenheit;
    do
    {
        printf("enter the Choice like : \n 1.calculate Simple Interest \n 2.Area Of Circle \n 3.Area of Circumferance \n 4.Tempreture Convertion Celcius to Fahrenheit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the values for Price ,Rate of Interest & Time\n");
            scanf("%f%f%f", &price, &ROI, &Time);
            simple_interest = (price * ROI * Time) / 100;
            printf("Simple Interest : %f\n", simple_interest);
            break;

        case 2:
            printf("Enter the values for Radius\n");
            scanf("%f", &r);
            AreaOfCircle = pi * r * r;
            printf("Area Of Circle: %f\n", AreaOfCircle);
            break;

        case 3:
            printf("Enter the values for Radius\n");
            scanf("%f", &r);
            areaOfCircumferance = 2 * pi * r * r;
            printf("Area of Circumferance  : %f\n", areaOfCircumferance);
            break;

        case 4:
            printf("enter the value of celsius\n");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;

        default:
            printf("Invalid Input\n");
        }
        printf("for continue this process Pres 1 or not then simply press any other Key : \n");
        scanf("%d", &Continue);
    } while (Continue==1);
    printf("Thank You Visit Again...!!!\n");
    return 0;
}