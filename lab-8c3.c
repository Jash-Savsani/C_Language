#include<stdio.h>
void main()
{
	int i,a,b;
	printf("Enter Your Divisible(Big Number):");
	scanf("%d",&a);
	printf("Enter Youe Divisor(Small Number):");
	scanf("%d",&b);
	i=0;
	while(a>=i)
	{
		a-=b;
		i++;
	}
	printf("Reminder of the Divion Operation:%d\n",a);
	printf("Quote of the Divion Operation:%d",i);
}

