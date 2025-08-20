#include<stdio.h>
void prime(int x, int y)
{
	int n,i,j;
	for(n=x+1;n<y;n++)
	{
		for(j=0,i=2;i<n;i++)
		{
			if(n%i==0)
			{
				j++;
			}
		}
		if(j==0)
		{
			printf("%d ",n);
		}
	}
}
void main()
{
    int a,b;
    printf("Enter First and Last Number For Prime:");
    scanf("%d%d",&a,&b);
    printf("Prime Num Between %d and %d are:",a,b);
    prime(a,b);
}

