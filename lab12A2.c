/*Write a program that interchanges 
the odd and even elements of an array.*/
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter Number of Elements of Array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)//even
		{
			a[i]-=1;
		}
		else
		{
			a[i]+=1;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\na[%d] is: %d",i,a[i]);
	}
}
