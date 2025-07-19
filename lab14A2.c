#include<stdio.h>
void main()
{
	int a[10],p=0,n=0,z=0,i;
	for(i=0;i<10;i++)
	{
		printf("Enter a Number:");
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			p++;
		}
		else if(a[i]<0)
		{
			n++;
		}
		else
		{
			z++;
		}
	}
	printf("Total Positive Numbers:%d",p);
	printf("\nTotal Negative Numbers:%d",n);
	printf("\nTotal Zero Numbers:%d",z);
}
