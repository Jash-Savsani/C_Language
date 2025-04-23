#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    a^b ? printf("Numbers are Not Equal.") : printf("Numbers are Equal.");
}