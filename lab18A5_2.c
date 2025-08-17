/*Swap two numbers using call by value*/
#include<stdio.h>
void swap(int x,int y)
{
    y=y+x;
    x=y-x;
    y=y-x;
    printf("Now Your First Num is %d and Second Num is %d\n",x,y);
}
void main()
{
    int a,b;
    printf("Enter First Num:");
    scanf("%d",&a);
    printf("Enter Second Num:");
    scanf("%d",&b);
    printf("Your First Num is %d and Second Num is %d\n",a,b);
    swap(a,b);
    printf("Your First Num is %d and Second Num is %d",a,b);
}