/*Find a peak element, which is not smaller than its neighbours.
input: arr[]= {5, 10, 20, 15}
Output: 20
Explanation: The element 20 has neighbours 10 and 15, both of them are less than 20.*/
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter a Number of Elements in Array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}	for(i=1;i<n-1;i++)
		{
			if(a[i]>=a[i-1] && a[i]>=a[i+1])
			{
				printf("\nThe element %d has neighbours %d and %d, both of them are less than %d.",a[i],a[i-1],a[i+1],a[i]);
			}
		}
}
