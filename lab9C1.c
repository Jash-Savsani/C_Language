//Two numbers are entered through the keyboard. 
//Write a program to find the value of one number raised to the power of another 
//(Without using multiplication and power function)
#include<stdio.h>
void main()
{
	int b,p,a=1,i,j,k,sum;
	printf("Enter Base:");
	scanf("%d",&b);
	k=b;
	sum=b;
	printf("Enter Power:");
	scanf("%d",&p);
	for(i=1;i<p;i++,k=sum)
	{
		for(j=1;j<b;j++)
		{
			sum+=k;
		}
	}
	printf("ans: %d",k);
}
