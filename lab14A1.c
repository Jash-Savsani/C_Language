#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter a Number of Array Elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
	}
	printf("Normal Series:");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\nReverse Series:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d,",a[i]);
	}
}
