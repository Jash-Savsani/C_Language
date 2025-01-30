#include<stdio.h>
void main()
{
	int i,n,j,temp;
	printf("Enter Number of Series N: ");
	scanf("%d",&n);
	printf("Given Prime Num Between is:  ");
	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=2;j<=n,i>j;i++)
		{
			if(i%j==0)
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
		{
			printf("%d ",i);
		}
	}
	
}
