#include<stdio.h>
void main()
{
	int a;
	printf("Enter Number:");
	scanf("%d",&a);
	if(a & 1)
	{
		printf("%d is odd.",a);
	}
	else
	{
		printf("%d is even.",a);
	}
}
