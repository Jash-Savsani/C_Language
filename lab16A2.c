#include<stdio.h>
void main()
{
	int i,j,r,c,p=0,n=0,z=0;
	printf("How many rows you want:");
	scanf("%d",&r);
	printf("How many colums you want:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a Number a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0)
			{
				p++;
			}
			else if(a[i][j]<0)
			{
				n++;
			}
			else
			{
				z++;
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nTotal Positive numbers= %d",p);
	printf("\nTotal Negative numbers= %d",n);
	printf("\nTotal Zero are = %d",z);
}
