#include<stdio.h>
void main()
{
	int i,n;
	printf("How many floating values do you want:");
	scanf("%d",&n);
	float a[n],sum=0.0,avg;
	i=0;
	while(i<n)
	{
		printf("Enter a[%d]:",i);
		scanf("%f",&a[i]);
		sum+=a[i];
		i++;
	}
	avg=(float)sum/n;
	printf("Average of %d floating number are: %f",n,avg);
}
