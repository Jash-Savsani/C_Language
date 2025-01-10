#include<stdio.h>
void main()
{
	int n,ans;
	printf("Enter Total Num. Days After you Return a Book:");
	scanf("%d",&n);
	ans=n-30;
	if(ans<=5 && ans>0)
	{
		printf("You have late, so you pay Fine of 50paisa.");
	}
	else if(ans<=10 && ans>5)
	{
		printf("You have late, so you pay Fine of 1Rs.");
	}
	else if(ans>10)
	{
		printf("You have late, so you pay Fine of 5Rs.");
	}
	else
	{
		printf("Invalid Number you have Input.");
	}
	
	
		
}
