//Find factors of the given number without using % operator.
#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("Enter a Number:");
	scanf("%d",&n);
	temp=n;
	printf("Factors of %d Number is : 1 ",n);
	for(i=2;i<temp;i++)
	{
		n=temp;
		for(j=i;n>=0;j+=0)
		{
			n=n-j;
			if(n==0)
			{
				printf("%d ",j);
			}
		}
	}
	printf("%d",temp);
}
