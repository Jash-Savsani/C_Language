#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter Your Pattern Series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n;k>=i+1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(k=n-1;k>=i;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
		}
}
