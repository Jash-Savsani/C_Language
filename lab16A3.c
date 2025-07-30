#include<stdio.h>
void main()
{
	int i,j,a[20][1];
	for(i=0;i<20;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("Roll no %d Student mark is:",i+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
