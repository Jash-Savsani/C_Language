#include<stdio.h>
void main()
{
	int i,n,r;
	long ans=0,rev=0;
	printf("Enter 'Decimal Number':");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		r=n%2;
		rev=rev*10 + r;
		n=n/2;
	}
	printf("Given Number in 'Binary' is:");
	for(i=0;rev>0;i++)
	{
		r=rev%10;
		ans=ans*10 + r;
		rev=rev/10;
	}
	printf("%ld",ans);
}
