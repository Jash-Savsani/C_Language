//Write a program that finds a largest and smallest number from series of inputted number from user 
//(stop asking a number if user has inputted -1 as number)
#include<stdio.h>
void main()
{
	int n,s,l;
	for(;;)
	{
		printf("Enter a Number:");
		scanf("%d",&n);
			if(n==-1)
			{
				break;
			}
			else if(n<s)
			{
				s=n;
			}
			else if(n>l)
			{
				l=n;
			}	
	}
	printf("Largest Number is: %d",l);
	printf("\nSmallest Number is: %d",s);
}
