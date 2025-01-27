//Print numbers between two given numbers, which is divisible by 2 and not divisible by 5.
#include<stdio.h>
void main()
{
	int i,j,n1,n2;
	printf("Enter Numbers Between Two Numbers:");
	scanf("%d%d",n1,n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0 && i%5!=0)
		{
			printf("%d is divisable by 2 and not divisable by 5.");
		}
	}
}
