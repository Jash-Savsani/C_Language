/*Delete all duplicate elements from an array using a pointer.*/
#include<stdio.h>
void main()
{
	int i,n,j;
	printf("Enter Number Of Elements in Array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]); 
	}
	int *k,*l;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			k=&a[i];
			l=&a[j];
			if((*k!=0)&&(*k==*l && i!=j))
			{
				*l=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d] is: %d\n",i,a[i]);
	}
}
