#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	if(a^b)/*For check eqality use botwise operator*/
	{
		printf("%d and %d is not equal.",a,b);
	}
	else
	{
		printf("%d and %d is equal.",a,b);
	}
}
