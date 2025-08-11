/*1. Add two numbers using function.
2. Find maximum and minimum between two numbers using function.
3. Count simple interest using function.
4. Return the maximum of three floating-point numbers.
5. Swap two numbers using call by value and call by reference.*/
#include<stdio.h>
void add(int a,int b);
void main()
{
    int a;
    printf("Enter a First Number:");
    scanf("%d",&a);
    int b;
    printf("Enter a Second Number:");
    scanf("%d",&b);
    add(a,b);
}
void add(int a,int b)
{
    printf("Sum of two Numbers is:%d",a+b);
}