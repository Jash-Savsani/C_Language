#include<stdio.h>
void main()
{
	int i,n,max,min,sum=0;
	float aveg;
	printf("Enter a Number of Array Elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nMaximum Number in Array is: %d",max);
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMinimum Number in Array is: %d",min);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("\nSum of Array Elements are: %d",sum);
	aveg=(float)sum/n;
	printf("\nAverage of All Array elements are: %f",aveg);
}
