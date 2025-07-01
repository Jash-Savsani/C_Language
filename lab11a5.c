#include<stdio.h>
void main()
{
	int j,ans=1,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(j=n;j>=1;j--)
	{
		ans*=j;
	}
	printf("\nFactorial of Given Number is:%d",ans);
}
