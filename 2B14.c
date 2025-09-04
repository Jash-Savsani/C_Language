#include<stdio.h>
void main()
{
    int n,ans=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            ans+=j;
        }
    }
    printf("Answer:%d",ans);
}