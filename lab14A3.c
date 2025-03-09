/*Given an N x M integer matrix, if an element is 0, 
set its entire row and column to 0's.*/
#include<stdio.h>
void main()
{
	int k,i,j,r,c,temp=0;
	printf("Enter Number of Rows and Columns for 2D Array: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	int row[r],col[c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				row[temp]=i;
				col[temp]=j;
				temp++;	
			}
		}
	}
	for(k=0;k<temp;k++)
	{
		//for row
		for(j=0;j<c;j++)
		{
			a[row[k]][j]=0;
		}
		//for comumn
		for(i=0;i<r;i++)
		{
			a[i][col[k]]=0;
		}
	}
	printf("\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	
}
