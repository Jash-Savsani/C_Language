#include<stdio.h>
void main()
{
	int a,b,r;
	printf("Enter a Number:");
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		b=b*10+r;
		a=a/10;
	}
	if(a==b)
	{
		printf("Given Number is Palindrome.");
	}
	else
	{
		printf("Given Number is Not Palindrome.");
	}
}
