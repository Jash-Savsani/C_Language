#include<stdio.h>
void main()
{
	int i=2,n,l,s,a;
	printf("Enter 1 Number:");
	scanf("%d",&a);
	l=a;
	s=a;
	while(1)
	{
		printf("Enter %d Number:",i);
		scanf("%d",&a);
		if(a==-1)
		{
			break;
		}
		if(a<s)
		{
			s=a;
		}
		if(a>l)
		{
			l=a;
		}
		i++;
	}
	printf("Largest num of Entered Number is: %d",l);
	printf("\nSmallest num of Entered Number is: %d",s);
	
}
