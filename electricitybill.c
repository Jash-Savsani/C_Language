#include <stdio.h>
void main()/*algoriths ma aapela step mujab karavu.*/
{
    float units, total, maintotal;
    printf("Enter Your Units:");
    scanf("%f", &units);
    if (units <= 50)
    {
        total = units * 50;
        maintotal = total + (total * 20 / 100);
        printf("Your total electricity bill=%f", maintotal);
    }
    else if (units <= 150)
    {
        total = 25 + (units - 50) * 0.75;
        maintotal = total + (total * 20 / 100);
        printf("Your total electricity bill=%f", maintotal);
    }
    else if (units <= 250)
    {
        total = 25 + 75 + (units - 150) * 1.2;
        maintotal = total + (total * 20 / 100);
        printf("Your total electricity bill=%f", maintotal);
    }
    else
    {
        total = 25 + 75 + 120 + (units - 250) * 1.5;
        maintotal = total + (total * 20 / 100);
        printf("Your total electricity bill=%f", maintotal);
    }
}
