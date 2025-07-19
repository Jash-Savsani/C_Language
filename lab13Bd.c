#include<stdio.h>
void main()
{
	int i,j,n=0,temp=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%c",temp);
				temp++;	
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}

