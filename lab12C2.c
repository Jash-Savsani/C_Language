/*2. Write a program to sort an array.*/
#include<stdio.h>
void main()
{
	int j,i,n;
	printf("Enter Number of Elements in Array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(j=1;j<n;j++)
	{
		for(i=1;i<n;i++)
		{
			if(a[i]<a[i-1])//a[i]=2 a[i-1]=3
			{
					a[i-1] = a[i-1] + a[i];
					a[i] = a[i-1] - a[i];
					a[i-1] = a[i-1] - a[i];
			}
		}
		
	}
	printf("\n\nSorting of Array is:")
	for(i=0;i<n;i++)
	{
		printf("\na[%d] is: %d",i,a[i]);
	}
}

