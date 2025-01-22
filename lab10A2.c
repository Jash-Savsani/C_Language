//Calculate xY without using power function also do not use multiplication
#include<stdio.h>
void main()
{
	int b,p,a=1,i,j,k,sum;
	printf("Enter Base:");
	scanf("%d",&b);
	k=b;
	sum=b;
	printf("Enter Power:");
	scanf("%d",&p);
	for(i=1;i<p;i++,k=sum)
	{
		for(j=1;j<b;j++)
		{
			sum+=k;
		}
	}
	printf("ans: %d",k);
}
