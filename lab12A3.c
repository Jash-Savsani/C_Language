/*Write a program to copy the contents of one array into another in the reverse order.*/
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a Number of Elements in Array:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
		b[n-i-1]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\na[%d] is:%d",i,a[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("\nb[%d] is:%d",i,b[i]);
	}
}
