//Find factorial of the given number without using multiplication.
#include<stdio.h>//baaki che.
void main()
{
	int show,m,n,sum,i,j;
	printf("Enter a Number:");
	scanf("%d",&n);
	show=n;
	m=n;
	sum=n;
	i=2;
	if(n==0 || n==1)
	{
		printf("Factorial of %d is: 1",n);
	}
	else{
	while(i<m)
	{
		j=1;
		while(j<=m-2)
		{
			sum+=n;
			j++;
		}
		n=sum;
		m--;
	}
	printf("Factorial of %d is: %d",show,sum);
	}
}
