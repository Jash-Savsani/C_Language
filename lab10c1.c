#include<stdio.h>
void main()
{
	int n,r,sum=0,temp;
	printf("Enter a Number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
    }
		if(sum==temp)
		{
			printf("Given Number is Armstrong Number");
		}
		else
		{
			printf("Given Number is not Armstrong Number");
		}
}
