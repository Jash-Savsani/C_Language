#include<stdio.h>//baaki che.
void main()
{
	int n,ans,m;
	printf("Enter Integer:");
	scanf("%d",n);
	printf("Enter a Number:");
	scanf("%d",&m);
	switch(n)
	{
		case 10: ans=(m*m);
				 printf("%d",ans);
				 break;
		case 9: printf("Enter New Value for %d",ans);
				scanf("%d",&ans);
				break;
		case 2: ans=(99*m);
				printf("%d",ans); 
				break;
		case 3: ans=(99*m);
				printf("%d",ans); 
				break;
	}
}
