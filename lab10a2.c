#include<stdio.h>
void main()
{
	int n,i=1,a,sum=0;
	float aveg;
	printf("How many times would you like to enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Enter a number:");
		scanf("%d",&a);
		sum+=a;
		i++;
	}
	printf("Sum of the numbers:%d",sum);
	aveg=(float)sum/n;/*interger answer ne float tarike vlaue define karva aa rite float lakine melvi sakay che.*/
	printf("\nAverage of the numbers:%f",aveg);
}
