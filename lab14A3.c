#include<stdio.h>
void main()
{
	int i,n,o=0,e=0;
	printf("Enter Your Array Elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("Total Even Numbers are:%d",e);
	printf("\nTotal Odd Numbers are:%d",o);
}

