#include<stdio.h>
void main()
{
	int n;
	printf("Enter Year:");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				printf("%d is leap year.",n);
			}
			else
			{
				printf("%d is not leap year.",n);
			}
		}
		else
		{
			printf("%d is leap year.",n);
		}
	}
	else
	{
		printf("%d is not leap year.",n);
	}
}
