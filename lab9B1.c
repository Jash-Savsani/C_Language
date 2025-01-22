//Write a program to read n floating-point numbers from user 
//and calculate average of positive numbers as well as negative number.
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter How many Floating Numbers would you want:");
	scanf("%d",&n);
	float sum=0.0,a[n],avg;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	avg=(float)(sum/n);
	printf("Average of All Floating Numbers is: %f",avg);
	
}
