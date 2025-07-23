#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a Number of an array elements:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("Your main Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\nYour Copy Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d,",b[i]);
	}
}
