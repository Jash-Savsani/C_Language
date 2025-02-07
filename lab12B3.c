#include<stdio.h>
void main(){
	int j,n,i,r2,r1;
	printf("Enter a Number of Elements in Array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	printf("Enter a Range of Two number for this Array: ");
	scanf("%d%d",&r1,&r2);
	for(i=0;i<n;i++)
	{
		if(a[i]>=r1 && a[i]<=r2)
		{
			printf("a[%d]=%d is Lay between %d to %d Range\n",i,a[i],r1,r2);
		}
	}
	
}
