#include<stdio.h>
void main()
{
	int o,s,c;
	printf("Enter Stock:");
	scanf("%d",&s);
	printf("Enter Order:");
	scanf("%d",&o);
	printf("Enter Credit if OK input '1', if NOTOK input '0':");
	scanf("%d",&c);
	if(o<=s && c==1)
	{
		printf("Supply has requirement.");
	}
	else if(c==0)
	{
		printf("intimation.");
	}
	else if(s<=0 && c==1)
	{
		printf("Supply.");
	}
}
