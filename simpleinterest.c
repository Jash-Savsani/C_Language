#include<stdio.h>
void main()
{
    float p,r,n,si;
    printf("Enter a Price:");
    scanf("%f",&p);
    printf("Enter a Rate:");
    scanf("%f",&r);
    printf("Enter a Year:");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("Simple Interrest:%f",si);
}