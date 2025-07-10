#include<stdio.h>
void main()
{
	int i,j,n,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum+=j;
		}
	}
	printf("Given Series Answer is : %d",sum);
}
