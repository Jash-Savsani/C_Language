#include<stdio.h>
void main()
{
    float a,b,c,ans;
    printf("Enter A:");
    scanf("%f",&a);
    printf("Enter B:");
    scanf("%f",&b);
    printf("Enter C:");
    scanf("%f",&c);
    ans=(a+b+c)/3.0;/*Jo ahi 3.0 ni jagya e 3 lakhyu hot to javab intiger ma aavet*/
    printf("Average=%f",ans);
}