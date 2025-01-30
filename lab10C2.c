//Check whether the given number is Armstrong Number or not.
#include<stdio.h>
void main()
{
	int digit=0,r,i,n,m,o,ans,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	m=n;
	o=n;
	for(;n>0;)
	{
		++digit;
		n/=10;
	}
	for(;m>0;)
	{
		ans=1;
		r=m%10;
		for(i=1;i<=digit;i++)
		{
			ans*=r;
		}
		sum+=ans;
		m/=10;
	}
	if(o==sum)
	{
		printf("%d is Armstrong Number.",o);
	}
	else
	{
		printf("%d is not Armstrong Number.",o);
	}
}
