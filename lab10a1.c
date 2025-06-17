#include<stdio.h>
void main()
{
	int i=1,temp=0,n,m,sum=0,r;
	printf("Enter a Number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		++temp;
	}
	while(m>0)
	{
		r=m%10;
		m=m/10;
		if(i==1||i==temp)
		{
			sum+=r;
		}
		++i;
	}
	printf("Sum of First and Last Digit of This Number is:%d",sum);
}
