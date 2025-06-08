#include<stdio.h>
void main()
{
	int i,a,n,sum;
	printf("Enter Your Square Number of Ending Series:");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		a=i*i;
		sum+=a;
		i++;
	}
	printf("Sum of the Series to %d is: %d",n,sum);
}
