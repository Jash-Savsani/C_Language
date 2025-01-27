//Print odd number’s sum from 1 to 2*n numbers.
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter Number N for Give Series:");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		if(i%2!=0)
		{
			printf("+%d",i);
			sum+=i;
		}
	}
	printf("=%d",sum);
}
