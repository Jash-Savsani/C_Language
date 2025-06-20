#include<stdio.h>
void main()
{
	int n,digit=0,r;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		digit++;
	}
	printf("Number of Digit : %d",digit);
}
