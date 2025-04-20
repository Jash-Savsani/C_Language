#include<stdio.h>
void main()
{
    int a,b,c,ans;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter Third Number:");
    scanf("%d",&c);
    ans=(a>b)?(a>c?a:(b>c?b:c)):(b>c?b:(a>c?a:c));
    printf("%d is largest number",ans);
}