#include<stdio.h>
void main()
{
    int i=1, ce=0, co=0,n;
    while(i<11)
	{
    	printf("Enter a Number:");
    	scanf("%d",&n);
		if(n%2==0)
		{
			ce++;
		}
		else
		{
			co++;
		}
		i++;
	}
	printf("Total of Odd Number is %d.\n",co);
	printf("Total of Even Number is %d.",ce);	
}
