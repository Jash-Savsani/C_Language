#include<stdio.h>
void main()
{
	int n,i=2;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("This is not Valid Number.");

	}
	else if(n==2)
	{
		printf("Number is Prime Number.");
	}
	else
	{
		while(i<n)
		{
			if(n%i==0)
			{
				printf("Number is not Prime.");
				break;
			}
			else
			{
				printf("Number is Prime.");
				break;
			}
			i++;
		}
    }
}
