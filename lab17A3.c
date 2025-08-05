#include<stdio.h>
void main()
{
    int a=5;
    int *p;
    p=&a;
    int b=2;
    int *q;
    q=&b;
    printf("%d",*p+*q);
}