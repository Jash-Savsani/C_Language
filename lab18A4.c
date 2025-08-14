/*4. Return the maximum of three floating-point numbers.*/
#include<stdio.h>
void maxthree(float x,float y ,float z);
void main()
{
    float a,b,c;
    printf("Enter a First Number:");
    scanf("%f",&a);
    printf("Enter a Second Number:");
    scanf("%f",&b);
    printf("Enter a Third Number:");
    scanf("%f",&c);
    maxthree(a,b,c);
}
void maxthree(float x,float y ,float z)
{
    if(x>=y && x>=z)
    {
        printf("%f is MAXIMUM.",x);
    }
    else if(y>=x && y>=z)
    {
        printf("%f is MAXIMUM.",y);
    }
    else if(z>=y && z>=x)
    {
        printf("%f is MAXIMUM.",z);
    }
}