/*4. Swap value of two numbers using pointer.*/
#include<stdio.h>
void main()
{
    int a=5;
    int *p;
    p=&a;
    int b=2;
    int *q;
    q=&b;
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("Swap of two Numbers:\n");
    printf("a=%d\n",*p);
    printf("b=%d",*q);
}