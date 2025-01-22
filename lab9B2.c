//Write a program that asks the user to enter a radius value, and computes the value of sphere with that radius. 
//The program should terminate when non-positive value is entered.
#include<stdio.h>
void main()
{
	int n,i;
	float ans;
	for(i=1;i>0;i++)
	{
		printf("Enter Radius Valuse:");
		scanf("%d",&n);
		if(n<0)
		{
			break;
		}
		else
		{
			ans = (float)(4/3)*(3.14)*(n*n*n);
			printf("Value of Spehere is: %f\n",ans);
		}
	}
	
}
