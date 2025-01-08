#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	switch(a>b)
	{
		case 1:printf("%d is Greater than %d.",a,b);
				break;
		default:printf("%d is Greater than %d.",b,a);
	}
}
