#include<stdio.h>
void main()
{
	int n,i,d=0;
	printf("Enter a Number of array elemants:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			d++;
		}
	}
	printf("Total 3 Divisable number is=%d",d);

		
}
