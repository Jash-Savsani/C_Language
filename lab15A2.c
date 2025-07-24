#include<stdio.h>
void main()
{
	int i,n,neg=0;
	printf("Enter a Number of an array elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
			printf("Enter a Number:");
			scanf("%d",&a[i]);
			if(a[i]<0)
			{
				neg++;
			}
	
	}
	printf("Total Negative Number are:%d",neg);
}
