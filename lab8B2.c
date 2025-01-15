#include<stdio.h>
void pattern()
{
	int i,j;
	i=1;
	while(i<=3)
	{
		j=1;
		while(j<=11)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
void main()
{
	pattern();
}
