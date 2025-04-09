/*Sort array-using pointers*/
#include<stdio.h>
void main()
{
	int i,n,j,*l,*k;
	printf("Enter Number of Elements in Array: ");
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
			l=&a[i];
			k=&a[i-1];
			if(*l<*k)//a[i]=2 a[i-1]=3
			{
					*k = *k + *l;
					*l = *k - *l;
					*k = *k - *l;
			}
		}
		
	}
	printf("Sorting Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("\na[%d] is: %d",i,a[i]);	
	}	
}
