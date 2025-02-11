#include<stdio.h>
void main()
{
	int n,i,count=1;
	printf("Enter Number of Elements in Array:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			
		}
		else
		{
			count=0;
			break;
		}
	}
	printf("\n\n");
	if(count==1)
	{
		printf("%d",count);
	}
	else
	{
		printf("%d",count);
	}
}
