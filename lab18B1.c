#include<stdio.h>
void fibbo(int n);
void main()

{
    int n;
    printf("Enter a Elements of Fibbonaki Series:");
    scanf("%d",&n);
    fibbo(n);
}
void fibbo(int n)
{
    if(n==1)
    {
        printf("0");
    }
    else if(n==2)
    {
        printf("0,1");
    }
    else if(n>2)
    {
        printf("0,1,");
       int i=2,x=0,y=1,ans;
       for(i=2;i<n;i++)
       {
           ans=x+y;
           printf("%d,",ans);
           x=y;
           y=ans;
       }
    }
}
