//Calculate xY without using power function also do not use multiplication
#include<stdio.h>
void main()
{
	int a,b,ans=1,i;
	printf("Enter Base:");
	scanf("%d",&a);
	printf("Enter Power:");
	scanf("%d",&b);
	i=1;
	while(i<=b){
		ans*=a;
		i++;
	}
//	for(i=1;i<=b;i++)
//	{
		
//	}
	printf("Answer is: %d",ans);
}
