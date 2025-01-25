#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			printf("%d",i);
		}
		i++;
	}
	if(sum==n)
	{
		printf("\n %d is perfect number.",n);
	}
	else
	{
		printf("\n %d is not perfect number.",n);
	}
}
