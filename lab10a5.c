#include<stdio.h>
void main()
{
	int n,r;
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("Reverse Number is :");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
