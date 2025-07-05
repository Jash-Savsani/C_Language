#include<stdio.h>
void main()
{
    int i;
    int a;
    int b;
    int ans=1;
    printf("Enter Your Number:");
    scanf("%d",&a);
    printf("Enter Your Power:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        ans = ans*a;
    }
    printf("Answer of the Power is:%d",ans);
}

