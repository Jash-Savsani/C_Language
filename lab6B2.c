#include<stdio.h>
void main()
{
	int i;
	float r,ans;
	printf("Enter Radius:");
	scanf("%f",&r);
	while(r>0.0)
	{
		ans=(4/3)*(3.1428)*(r*r*r);
		printf("Your Volume of Spehere is: %f",ans);
		printf("Enter Radius:");
		scanf("%f",&r);
	}
}
