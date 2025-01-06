#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Third Number:");
	scanf("%d",&c);
	(a>b)? (a>c)?printf("%d is Greatest.",a):printf("%d is Greatest.",c):(b>c)?printf("%d is Greatest.",b):printf("%d is Greatest.",c);
}
