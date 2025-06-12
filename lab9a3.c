#include<stdio.h>
void main()
{
    int i=1;
    int a;
    int b;
    int ans=1;
    printf("Enter Your Number:");
    scanf("%d",&a);
    printf("Enter Your Power:");
    scanf("%d",&b);
    while(i<=b)
    {
        ans = ans*a;
        i++; 
    }
    printf("Answer of the Power is:%d",ans);
}
