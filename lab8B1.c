//Write a program to generate all combinations of 1, 2 and 3 using loop.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("All Combinations of 1,2,3 using Loop.");
	a=1;
	while(a<=3)
	{
		b=1;
		while(b<=3)
		{
			c=1;
			while(c<=3)
			{
				printf("\n%d%d%d",a,b,c);	
				c++;
			}
			b++;
		}
		a++;
	}
}
