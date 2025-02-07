/*Write a program to find median of array.*/
#include<stdio.h>
void main()
{
	int j,n,i,ans;
	printf("Enter a Number of Elements in Array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
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
	printf("\n\nNOW SORTING OF ARRAY IN ASSENDING ORDER IS:\n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] is: %d\n",i,a[i]);
	}
	if(n%2==0)//even
	{
		n/=2;
		ans=a[n-1]+a[n];
		ans/=2;
		printf("Median of Array is: %d",ans);
	}
	else{
		n/=2;
		printf("Median of Array is: %d",a[n]);
	}
	
}
