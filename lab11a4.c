#include<stdio.h>
void main()
{
	int i,pow,base,ans=1;
	printf("Enter a Base:");
	scanf("%d",&base);
	printf("Enter a Power:");
	scanf("%d",&pow);
	for(i=1;i<=pow;i++)
	{
		ans*=base;
	}
	printf("Your Answer is : %d",ans);
}
