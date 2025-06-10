#include<stdio.h>
void main()
{
	int i,j,sum=0,n;
	printf("Enter Your Ending Series Position:");
	scanf("%d",&n);
	printf("Your Febonaaci Series is:");
	if(n==1)
	{
		printf("0");
	}
	else if(n==2)
	{
		printf("0,1");
	}
	else
	{
		printf("0,1,");
		int i=0;
		int j=1;
		int a;
		for(a=1;a<=n;a++)
		{
			sum=i+j;
			printf("%d,",sum);
			i=j;
			j=sum;
			a++;
		}
	}
}
