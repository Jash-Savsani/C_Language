#include<stdio.h>
void main()
{
    int a,s,b,inse,m,h;
    printf("Enter Your Seconds:");
    scanf("%d",&inse);
    h=inse/3600;
    a=inse-(h*3600);
    m=a/60;
    s=a-(m*60);
    printf("Time= %d : %d : %d",h,m,s);
}
