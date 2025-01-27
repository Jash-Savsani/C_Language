//Write a program to print first 50 numbers in series 1, 4, 7, 10,......
#include<stdio.h>
void main()
{
	int i,n=1;
	for(i=1;i<=50;i++)
	{
		printf(",%d ",n);
		n+=3;
	}
}
