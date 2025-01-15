#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	printf("Enter Number n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(l=i-1;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}
