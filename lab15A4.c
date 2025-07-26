#include<stdio.h>
void main()
{
	int n,i,h,e;
	printf("Enter a Number of Array Elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
	}
	printf("How many Elements would you like to want search:");
	scanf("%d",&h);
	if(h<=0||h>n)
	{
		printf("Not Possible.");
	}
	else
	{
		int b[h];
		for(i=0;i<h;i++)
		{
			printf("Which Elemant would you like to search:");
			scanf("%d",&e);
			b[i]=a[e-1];
			e=0;
		}
	}
	int b[i];
	printf("Your Search Elements are:");
	for(i=0;i<h;i++)
	{
		printf("\n%d",b[i]);
	}
}
