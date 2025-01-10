#include<stdio.h>
void main()
{
    int h;
    char v;
    printf("Which vehicle have you, if truck input 't', if car input 'c', if bus input 'b':");
    scanf("%c",&v);
    printf("How mmany hours spent your vehicle in parking:");
    scanf("%d",&h);
    if(v=='t')
    {
        int ans = 4*h;
        printf("Total Charge of Truck Parking is: %dRs.",ans);
    }
    else if(v=='c')
    {
        int ans = 2*h;
        printf("Total Charge of Car Parking is: %dRs.",ans);
    }
    else if(v=='b')
    {
        int ans = 3*h;
        printf("Total Charge of Bus Parking is: %dRs.",ans);
    }
    else
    {
        printf("Sorry You input invalid Character.");
    }
}