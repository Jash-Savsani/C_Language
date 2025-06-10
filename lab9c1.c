#include<stdio.h>
void main()
{
	int n,r,rev;
	printf("Enter a Number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev= rev*10 + r ;
		n=n/10;
	}
	while(rev>0)
	{
		r=rev%10;
		if(r==0)
		{
			printf("ZERO ");
		}
		else if(r==1)
		{
			printf("ONE ");
		}
		else if(r==2)
		{
			printf("TWO ");
		}
		else if(r==3)
		{
			printf("THREE ");
		}
		else if(r==4)
		{
			printf("FOUR ");
		}
		else if(r==5)
		{
			printf("FIVE ");
		}
		else if(r==6)
		{
			printf("SIX ");
		}
		else if(r==7)
		{
			printf("SEVEN ");
		}
		else if(r==8)
		{
			printf("EIGHT ");
		}
		else if(r==9)
		{
			printf("NINE ");
		}
		rev=rev/10;
	}
}

