/*3. Count simple interest using function.*/
#include<stdio.h>
int simint(int x, int y, int z);
void main()
{
    int a,b,c,ans;
    printf("Enter a First Number:");
    scanf("%d",&a);
    printf("Enter a Second Number:");
    scanf("%d",&b);
    printf("Enter a Third Number:");
    scanf("%d",&c);
    ans=simint(a,b,c);
    printf("%d",ans);
}
int simint(int x, int y, int z)
{
    int w;
    w=(x+y+z)/3;
    printf("Simple INTEREST of three Numbers is:");
    return w;
}