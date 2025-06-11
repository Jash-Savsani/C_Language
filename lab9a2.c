#include<stdio.h>
void main()
{
    int i=1,n,ans;
    printf("Enter Your Multiplication Number:");
    scanf("%d",&n);
    while(i<=10)
    {
        ans=n*i;
        printf("%d * %d = %d\n",n,i,ans);
        i++;
    }
}