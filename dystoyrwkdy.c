#include<stdio.h>
void main()
{
	int indt,y,a,w,d;
	printf("Enter Number of Days:");
	scanf("%d", &indt);
	y=indt/365;
	a=indt-(365*y);
	w=a/7;
	d=a-(w*7);
	printf("Answer:Year = %d\n    week= %d\n    Day= %d",y,w,d);
	
}