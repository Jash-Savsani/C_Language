#include<stdio.h>
void main()
{
	int sum=0,s,l,a,A,i,b[5];
	float avg;
	char j;
	for(i=0;i<5;i++)
	{
		printf("Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	s=b[0];
	l=b[0];
	printf("If you want to choose smallest input 's',choose largest input 'l',\nperform addition input 'a', perform Average input'A'.");
	scanf(" %c",&j);
	switch(j)
	{
		case 's':   for(i=1;i<5;i++)
					{
						if(b[i]<s)
						{
							s=b[i];
						}
					}
					printf("Smallest Number Between five Number is %d",s);
					break;
		case 'l':	for(i=1;i<5;i++)
					{
						if(b[i]>l)
						{
							l=b[i];
						}
					}
					printf("Largest Number Between five Number is %d",l);
					break;
		case 'a':   for(i=0;i<5;i++)
					{
						sum=sum+b[i];
					}
					printf("Sum of five Number is %d",sum);
					break;
		case 'A':	 for(i=0;i<5;i++)
					{
						sum=sum+b[i];
					}
					avg=(float)sum/5;
					printf("Average of five Number is %f",avg);
					break;
		default : 	printf("Error.\nInvalid Choice.");
	}
	
}
