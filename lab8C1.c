#include<stdio.h>
void main()
{
	int i,j,n,count1=1,count2=65;
	printf("Enter Number n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%d ",count1);
				count1++;
			}
			else
			{
				printf("%c ",count2);
				count2++;
			}
		}
		printf("\n");
	}
}
