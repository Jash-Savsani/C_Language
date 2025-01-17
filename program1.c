#include<stdio.h>//cheack if number 2,4,8,16,32,64,128.......
void main()
{
	int i,n,temp=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		if(n==1)
		{
			printf("True.");
			temp++;
			break;
		}
		else if(i==n)
		{
			printf("True");
			temp++;
			break;
		}
	}
	if(temp==0)
	{
		printf("False");
	}
	
}
