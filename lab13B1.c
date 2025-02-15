/*Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00}, 
dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00}*/
#include<stdio.h>
void main()
{
	int i,n,j,temp,p[n],max;
	printf("Enter Total Numbers of Trains: ");
	scanf("%d",&n);
	float a[n],d[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d train Apprchment Time:",i+1);
		scanf("%f",&a[i]);
		printf("Enter %d train Deparchment Time:",i+1);
		scanf("%f",&d[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=0;
		for(j=0;j<n;j++)
		{
			if((a[i]<=a[j] && d[i]>=a[j])||(a[i]<=d[j] && d[i]>=d[j]))
			{
				temp++;
			}
		}	
		p[i]=temp;
	}	
	max=p[0];
	for(i=1;i<n;i++)
	{
		if(max<p[i])
		{
			max=p[i];
		}
	}									
	printf("Total Required Platform is: %d",max);
	
}
