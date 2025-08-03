/*1. Print value and address of a variable.
2. Demonstrate int, float, double and char pointer.
3. Calculate sum of two numbers using pointer.
4. Swap value of two numbers using pointer.
5. Store n elements in an array and print the elements using pointer.*/
#include<stdio.h>
void main()
{
    int a=5;
    int *p;
    p=&a;
    printf("%d\n",*p);
    printf("%d",p);
}