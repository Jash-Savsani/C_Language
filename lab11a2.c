#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a Ending Number of this Series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("\nSum of the series Number is : %d",sum);
}
