#include<stdio.h>
void main()
{
	int r,n,temp1,rev,rev2,ans,temp2,f1,f3,f2;				
	printf("Enter a Number:");				
	scanf("%d",&n);							
	for(temp1=0;n>0;temp1++)
	{
		r=n%10;
		rev=rev*10+r;
		n=n%10;
	}
	for(temp2=1;rev>0;temp2++)
	{
		r=rev%10;
		if(temp2==1)
		{
			f1=r;
		}
		else if(temp2==temp1)
		{
			f3=r;		
		}
		else
		{
			f2=f2*10+r;
		}
		rev=rev/10;
	}
	printf("\n%d%d%d",f1,f2,f3);
}
