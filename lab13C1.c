#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter Number of Items: ");
	scanf("%d",&n);
	int f[n],x;//freshness,min freshhness
	int c[n],sum=0;//cost
	for(i=0;i<n;i++)
	{
		printf("Enter %d Item Freshness: ",i+1);
		scanf("%d",&f[i]);
		printf("Enter %d Item Cost: ",i+1);
		scanf("%d",&c[i]);
	}
	printf("Enter Your Minimum Freshness: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(f[i]>x)
		{
			sum+=c[i];
		}
	}
	printf("Total Cost is : %d",sum);
}
