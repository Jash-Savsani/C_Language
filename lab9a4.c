#include<stdio.h>
void main()
{
    int n,j,ans=1;
    printf("Enter a Number for Factorial:");
    scanf("%d",&n);
    j=n;
    while(n>=1)
    {
        ans=ans*n;
        n--;
    }
    printf("Factorial of %d is:%d",j,ans);
}