/*Given a N x M matrix, print its element in zig-zag fashion, 
i.e., print first row from left to right, 
second row from right to left, third row again from left to right and so on.*/
#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf("Enter Number of Rows and Colums for 2D Array: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<r;i++)
	{
		if(i%2==0)//even
		{
			for(j=0;j<c;j++)
			{
				printf("a[%d][%d] is: %d\n",i,j,a[i][j]);
			}	
		}
		else//odd
		{
			for(j=c-1;j>=0;j--)
			{
				printf("a[%d][%d] is: %d\n",i,j,a[i][j]);
			}	
		}
		
	}
}
