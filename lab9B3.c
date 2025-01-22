//Write a program that prints Fibonacci series upto n term.
#include<stdio.h>
void main()
{
	int i,n,a=0,b=1,ans;
	printf("Enter End Number N of Series:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n==1)
		{
			printf("0");
		}
		else if(n==2)
		{
			printf("0 1");
		}
		else
		{
			printf("0 1 ");
			for(i=3;i<=n;i++)
			{
				ans=a+b;
				printf("%d ",ans);
				a=b;
				b=ans;
			}
		}
	}
	
}
