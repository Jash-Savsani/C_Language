#include<stdio.h>
void main()
{
	int i=2,n,flag=0;
	printf("Enter n :");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("Prime Number.");
	}
	else
	{
		printf("Not Prime Number.");
	}
}
