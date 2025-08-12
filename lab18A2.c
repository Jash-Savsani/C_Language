/*2. Find maximum and minimum between two numbers using function.*/
#include<stdio.h>
void maxmin(int x, int y);
void main()
{
    int a,b;
    printf("Enter a First Number:");
    scanf("%d",&a);
    printf("Enter a Second Number:");
    scanf("%d",&b);
    maxmin(a,b);
}
void maxmin(int x, int y)
{
    if(x>y)
    {
        printf("%d is MAXIMUM.\n%d is MINIMUM",x,y);
    }
    else
    {
        printf("%d is MAXIMUM.\n%d is MINIMUM",y,x);
    }
}