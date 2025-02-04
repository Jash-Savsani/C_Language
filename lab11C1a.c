/*1
A B
1 2 3
C D E F
1 2 3 4 5*/
#include<stdio.h>
void main()
{
	int k,i,j,n,count=1;
	printf("Enter Number of Row in this Series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%c ",count+64);
				count++;
			}
			else
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
