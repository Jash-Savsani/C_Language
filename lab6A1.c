#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter N of Ending of the Series:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i % 2 != 0)
		{
			printf("%d,",i);
		}
		i++;
	}
}
