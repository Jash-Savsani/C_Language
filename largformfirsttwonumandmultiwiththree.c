#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter Frist Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    printf("Enter Third Number:");
    scanf("%f",&c);
    if(a>b)
    {
        d=a*c;
        printf("Answer of This Question:%f",d);
    }
    else if(b>a){
        d=b*c;
        printf("Answer of This Question:%f",d);
    }
}