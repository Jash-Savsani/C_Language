#include<stdio.h>
void main()
{
	int n2,n1,i;
	printf("Enter Starting of the Series:");
	scanf("%d",&n1);
	printf("Enter Ending of the Series:");
	scanf("%d",&n2);
	n1++;
	while(n1<n2)
	{
		if(n1%2==0 && n1%5!=0)
		{
			printf("%d,",n1);
		}
		n1++;
	}
	
//	i=1;
//	while(i<=n)
//	{
//		if(i%2==0 && i%5!=0)
//		{
//			printf("%d,",i);
//		}
//		i++;
//	}
//	
}
