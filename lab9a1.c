#include<stdio.h>
void main()
{
   int n,j,b,a,ans,i=1;
   a=0;
   b=0;
   printf("Enter Last Digit of the Series :");
   scanf("%d",&n);
   if(n%2==0)
   {
    i=n-1;
    j=-(n);
   }
   else if(n%2!=0)
   {
    i=n;
    j=-(i-1);
   }
   while(i>=1)
   {
    a=a+i;
    i-=2;
   }
   while(j<=-1)
   {
    b=b+j;
    j+=2;
   }
   ans=a+b;
   printf("Answer of the series is:%d",ans);
}
