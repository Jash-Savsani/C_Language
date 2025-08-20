#include<stdio.h>
int fact(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    return x*fact(x-1);
}
void main()
{
    int n,ans;
    printf("Enter Num for Factorial:");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factorail of %d is %d:",n,ans);
}