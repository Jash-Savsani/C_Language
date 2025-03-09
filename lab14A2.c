/*Given a N x M(N rows and M columns) matrix, print it upside down, i.e, last row should come first, 
second last should come second......so on..and finally first row should come in last*/
#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf("Enter Number of Rows and Columns for 2D Array: ");
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
	for(i=r-1;i>=0;i--)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] is : %d\n",i,j,a[i][j]);
		}
	}
}
