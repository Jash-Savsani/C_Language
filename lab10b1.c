#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
			printf("%+d",i);
		}
		i++;
	}
	printf("=%d",sum);
	if(sum==n)
	{
		printf("\nGiven Number is Perfect Number.");
	}
	else
	{
		printf("\nGiven Number is not Perfect Number.");
	}
}
