#include<stdio.h>
void main()
{
	int max,n,i;
	printf("Enter number of Mountain: ");
	scanf("%d",&n);
	int t[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d Mountain Height(in meter): ",i+1);
		scanf("%d",&t[i]);
	}
	max=t[0];
	for(i=1;i<n;i++)
	{
		if(t[i]>max)
		{
			max=t[i];
		}
	}
	printf("Tallest Mountain Height is: %d",max);
}
