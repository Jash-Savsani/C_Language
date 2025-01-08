#include<stdio.h>
void main()
{
	int n,j;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(n>=1)
	{
		j=1;
	}
	else if(n<=-1)
	{
		j=3;
	}
	else if(n==0)
	{
		j=2;
	}
	switch(j)
	{
		case 1: printf("%d is positive.",n);
				break;
		case 2: printf("%d is zero.",n);
				break;
		case 3: printf("%d is negative.",n);
				break;
	}
}
