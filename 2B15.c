#include<stdio.h>
void main()
{																													
	int i,n,x,y,ans,temp1,temp2,digit,r;
	printf("Enter Starting Point:");
	scanf("%d",&x);
	printf("Enter Ending Point:");
	scanf("%d",&y);
	printf("Armstrong Numbers Between %d to %d is:",x,y);
	for(n=x;n<=y;n++)
	{
		temp1=n;
		temp2=n;
		digit=0;
		ans=0;
		while(temp1>0)
		{
			digit++;
			temp1/=10;
		}
		temp1=1;
		while(temp2>0)
		{
			r=temp2%10;
			for(i=1;i<=digit;i++)
			{
				temp1*=r;
			}
			ans+=temp1;
			temp1=1;
			temp2/=10;
		}
		if(ans==n)
		{
			printf("%d ,",ans);
		}
	}
}
