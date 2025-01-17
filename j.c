#include<stdio.h>
void main()
{
    int a,b,i=1,m=0;
    printf("Enter a First Number:");
    scanf("%d",&a);
    printf("Enter a Second Number:");
    scanf("%d",&b);
    while(i<=a||i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            if(m<i)
            {
                m=i;
            }
        }
        i++;
    }
    printf("Common Highest Factor is:%d",m);
}

