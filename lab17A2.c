#include<stdio.h>
void main()
{
    int a,*p;
    printf("Enter Integer:");
    scanf("%d",&a);
    p=&a;
    float b,*q;
    printf("Enter Float:");
    scanf("%f",&b);
    q=&b;
    char c,*r;
    printf("Enter Character:");
    scanf("%c",&c);
    r=&c;
    printf("Integer is %d and Its address is %d",*p,p);
    printf("\nFloat is %f and Its address is %d",*q,q);
    printf("\nCharacter is %c and Its address is %d",*r,r);
}